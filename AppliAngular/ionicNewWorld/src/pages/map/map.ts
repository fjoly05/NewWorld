import { Component, ViewChild, ElementRef } from '@angular/core';
import { IonicPage, NavController, NavParams } from 'ionic-angular';

import { ControleurVisiteProvider } from '../../providers/controleur-visite/controleur-visite';

declare var google;

@IonicPage()

@Component({
  selector: 'page-map',
  templateUrl: 'map.html'
})

export class MapPage {

  @ViewChild('map') mapElement: ElementRef;
  map: any;
  start = 'gap, france';
  end = 'briançon, france';
  directionsService = new google.maps.DirectionsService;
  directionsDisplay = new google.maps.DirectionsRenderer;


  constructor(public navCtrl: NavController, public navParams: NavParams, private controleurVisiteProvider: ControleurVisiteProvider)
  {
    //debut
    //appel json
    console.log("debut constructeur");
    controleurVisiteProvider.load().subscribe(waypts => { 
      this.waypts = waypts;
      console.log("dans le constructeur");
      console.log(this.waypts);
      this.calculateAndDisplayRoute();
    });
  }

  ionViewDidLoad(){
    this.initMap();
    //this.calculateAndDisplayRoute();
  }

  initMap() {
    this.map = new google.maps.Map(this.mapElement.nativeElement, {
      zoom: 7,
      center: {lat: 44.556, lng: 6.079}
    });

    this.directionsDisplay.setMap(this.map);
  }

  waypts = [];

  calculateAndDisplayRoute() {
    this.directionsService.route({
      origin: this.start,
      destination: this.end,
      waypoints: this.waypts,
      optimizeWaypoints: true,
      travelMode: 'DRIVING',
      drivingOptions: {departureTime: new Date(Date.now() +1000*60*60),trafficModel: 'optimistic'}
    }, (response, status) => {
      if (status === 'OK') {
        this.directionsDisplay.setDirections(response);
      } else {
        window.alert('Directions request failed due to ' + status);
      }
    });
  }

}
