import { Component } from '@angular/core';
import { NavController } from 'ionic-angular' ;
import { ModalController} from 'ionic-angular';
import { ModalPage } from './modalContent' ;
import { ControleurVisiteListProvider } from '../../providers/controleur-visite-list/controleur-visite-list';

@Component({
  selector: 'page-liste',
  templateUrl: 'liste.html',

})
export class ListePage {
  constructor(public navCtrl: NavController, public modalCtrl: ModalController, private controleurVisiteListProvider: ControleurVisiteListProvider)
  {
    //debut
    //appel json
    console.log("debut constructeur");
    controleurVisiteListProvider.load().subscribe(visites => { 
      this.visites = visites;
      console.log("dans le constructeur");
      console.log(this.visites);
    });
  }
  openModal(visiteNum) {

    let modal = this.modalCtrl.create(ModalPage, visiteNum);
    modal.present();
  }

  visites = [];
}

