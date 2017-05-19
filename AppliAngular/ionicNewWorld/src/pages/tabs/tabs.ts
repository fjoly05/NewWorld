import { Component } from '@angular/core';

import { ListePage } from '../liste/liste';
import { MapPage } from '../map/map';

@Component({
  templateUrl: 'tabs.html'
})
export class TabsPage {

  tab1Root = MapPage;
  tab2Root = ListePage;

  constructor() {

  }
}
