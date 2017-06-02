import { HttpModule } from '@angular/http';
import { NgModule, ErrorHandler } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';
import { IonicApp, IonicModule, IonicErrorHandler } from 'ionic-angular';
import { MyApp } from './app.component';

import { ListePage } from '../pages/liste/liste';
import { MapPage } from '../pages/map/map';
import { TabsPage } from '../pages/tabs/tabs';
import { ModalPage } from '../pages/liste/modalContent'

import { StatusBar } from '@ionic-native/status-bar';
import { SplashScreen } from '@ionic-native/splash-screen';
import { ControleurVisiteProvider } from '../providers/controleur-visite/controleur-visite';
import { ControleurVisiteListProvider } from '../providers/controleur-visite-list/controleur-visite-list';
import { ControleurVisiteListModalProvider } from '../providers/controleur-visite-list-modal/controleur-visite-list-modal';

@NgModule({
  declarations: [
    MyApp,
    ListePage,
    MapPage,
    TabsPage,
    ModalPage
  ],
  imports: [
    BrowserModule,
    HttpModule,
    IonicModule.forRoot(MyApp)
  ],
  bootstrap: [IonicApp],
  entryComponents: [
    MyApp,
    ListePage,
    MapPage,
    TabsPage,
    ModalPage
  ],
  providers: [
    StatusBar,
    SplashScreen,
    {provide: ErrorHandler, useClass: IonicErrorHandler},
    ControleurVisiteProvider,
    ControleurVisiteListProvider,
    ControleurVisiteListModalProvider
  ]
})
export class AppModule {}
