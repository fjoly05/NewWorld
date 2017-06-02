import { Component } from '@angular/core';
import { Platform, NavParams, ViewController } from 'ionic-angular';
import { ControleurVisiteListModalProvider } from '../../providers/controleur-visite-list-modal/controleur-visite-list-modal';

@Component({
  templateUrl: 'modalContent.html'
})

export class ModalPage {
  uneVisite = [];
  visite = [];

  constructor(public platform: Platform, public params: NavParams, public viewCtrl: ViewController, private controleurVisiteListModalProvider: ControleurVisiteListModalProvider) {
    //debut
    //appel json
    console.log("debut constructeur");
    controleurVisiteListModalProvider.load().subscribe(uneVisite => { 
      this.uneVisite = uneVisite;
      console.log("dans le constructeur");
      console.log(this.uneVisite);
      this.visite = this.uneVisite[this.params.get('visNum')];
      console.log(this.visite);
    });

  }

  dismiss() {
    //requete de renvoie ?
    this.viewCtrl.dismiss();
  }
}