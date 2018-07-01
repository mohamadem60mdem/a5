import { Component } from '@angular/core';
import { NavController } from 'ionic-angular';

import { Contacts, Contact, ContactField, ContactName } from '@ionic-native/contacts';

@Component({
  selector: 'page-home',
  templateUrl: 'home.html'
})
export class HomePage {

  constructor(private contacts: Contacts,public navCtrl: NavController
  ) {

  }


  public m2: any;

  public myHero: string;
  public allContacts: any



  //let contact: Contact = this.contacts.create();
//.contacts.find
  //let contact: Contact = this.contacts.find();
  s1(){
    
    //let contact: Contact = this.contacts.create();
    this.myHero = '---------a1';
    
    //let contacts   = this.contacts.find.length.toString();
   
    this.m2= this.contacts.find(['*'], {filter: '', multiple: true})
    .then(data => {
  this.allContacts = data 
 // console.log(   data.toString());
 for (var i=0; i<11; i++) {
  console.log(i);
}

});
 // console.log(  this.allContacts);
    //contact.name = new ContactName(null, 'Smith3', 'John3');
   // contact.phoneNumbers = [new ContactField('mobile', '3331234567')];
    
    
  }



}
