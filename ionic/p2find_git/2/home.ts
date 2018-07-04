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
  private contactlist: any[]; 


  //let contact: Contact = this.contacts.create();
//.contacts.find
  //let contact: Contact = this.contacts.find();


  //s1-------------------------------------------------------------------------------
  s1(){
    
    //let contact: Contact = this.contacts.create();
    this.myHero = '---------a1';
    
    //let contacts   = this.contacts.find.length.toString();
   
    this.m2= this.contacts.find(['*'], {filter: '', multiple: true})
    .then(data => {
  this.allContacts = data 
 // console.log(   data.toString());
 // loop in console
//  for (var i=0; i<11; i++) {
//   console.log(i);
// }

  
 
data.forEach(
  function(value, key) {  console.log(key + 
    '--------------------------------------------> ' + console.log('---------') +
    '...................addresses-> ' + value.addresses + 
    '.....birthday->' + value.birthday + 
    '....displayName->' + value.displayName +
    '....emails->' + value.emails +
    '....id->' + value.id +
  '.....ims-> ' + value.ims +
  '.....name-> ' + value.name +
  '.....nickname-> ' + value.nickname +
  '.....note-> ' + value.note +
  '.....organizations-> ' + value.organizations +
  '.....phoneNumbers-> ' +
   value.phoneNumbers.forEach(function(value, key){ console.log( key+'kk value ->'+ value.value+' kk type'+ value.type) } ) +
  '.....photos-> ' + value.photos  +
  '.....urls-> ' + value.urls
);} 
);

console.log('1-----------------------------------------------------------------------' )
// data.forEach(obj, function(value, key) {
//   console.log(key + ': ' + value);
// });

});
 // console.log(  this.allContacts);
    //contact.name = new ContactName(null, 'Smith3', 'John3');
   // contact.phoneNumbers = [new ContactField('mobile', '3331234567')];
    
    
  }
//s1-------------------------------------------------------------------------------






//s2-------------------------------------------------------------------------------

 
s2(){
 
  this.contacts.find(['*'], {filter: "", multiple: true})
  .then(data2 => {
    this.allContacts = data2


    for (var i=0; i<data2.length; i++) {
      // console.log("data2.length = " + data2.length+" . ---------------- ");
      // console.log("Display Name = " + data2[i].displayName);
      // console.log("familyName   = " + data2[i].name.familyName);
    }

     
    



  data2.forEach(  function(value, key,array) {  console.log('***' + value.name.familyName
  + value.displayName
  +value.phoneNumbers.forEach(function(value, key){ console.log( key+'kk value ->'+ value.value+' kk type'+ value.type) } )
  

)}   )


    

} );
  

}    
 
//s2-------------------------------------------------------------------------------








//s6-------------------------------------------------------------------------------
s6(){
  let copy:number = 0;

  this.contacts.find(['displayName', 'name', 'phoneNumbers', 'emails'], {filter: "", multiple: true})
  .then(data2 => {
    this.allContacts = data2
  });

   this.m2= this.contacts.find(['*'], {filter: '', multiple: true})
   .then(data => {
    //this.allContacts = data ;
   // var myJSON;
   var myJSON,obj ;
 
    myJSON = JSON.stringify(data);
   //console.log('---'+myJSON )


    //obj = JSON.parse(myJSON);
   let i,x :any
   for (i in data) {
   // x += data.cars[i];
    console.log(data[0]);   
}

 
console.log(' #------------------------------------------- ')
  

    data.forEach(function(value, key){
        console.log('---key'+key )
       myJSON = JSON.stringify(value);

     // myJSON =value;

        // console.log('---'+myJSON )
       
        let i :any
        for (i = 0; i < 33; i++) { 
        //  console.log(   myJSON[i]); 
        // console.log(  '000000'+value[i]);
        }

 
    });


   // console.log('---'+  myJSON  );
   

      //  data.forEach(
      //    function(value, key) {  console.log(key + 
      //      '...................addresses-> ' + value.addresses   
      //  );} 
      //  );

  });










}
//s6-------------------------------------------------------------------------------











//s5-------------------------------------------------------------------------------
s5(){

  const items = ['item1', 'item2', 'item3'];
  const copy = [];
  
  items.forEach(function(item){
    copy.push(item)
     
    console.log('---'+copy)

  });

}
//s5-------------------------------------------------------------------------------










//s4-------------------------------------------------------------------------------
s4(){


  let demoP = document.getElementById("demo");
  var numbers = [4, 9, 16, 25];

  
  function myFunction(item, index) {
      demoP.innerHTML = demoP.innerHTML + "index[" + index + "]: " + item + "<br>"; 
  }
  

  numbers.forEach(myFunction);



}

//s4-------------------------------------------------------------------------------






//s3-------------------------------------------------------------------------------
 
s3(){
  let i :any

  for (i = 0; i < 2; i++) { 
    console.log(  i);
  }
  const arr = ['cat', 'dog', 'fish'];
 
  //console.log('---'+arr.length)

  const obj = {  
    a: 1,
    b: 2,
    c: 3,
    d: 4
  }
   
    console.log('- - -' )
    let elem;

  for (elem in obj) {  
   // console.log( obj[elem] )
   //console.log( elem )
  }

  

}



//s3-------------------------------------------------------------------------------






}
