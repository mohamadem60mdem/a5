//fix version 3.x
var MongoClient = require('mongodb').MongoClient;
var url = "mongodb://localhost:27017/mydb";

MongoClient.connect(url, function(err, database) {
  if (err) throw err;

  const myAwesomeDB = database.db('mydb4');
  var myobj = { name: "Company Inc", address: "Highway 37" };
  myAwesomeDB.collection("collection1").insertOne(myobj, function(err, res) {
    if (err) throw err;
    console.log("1 document inserted");
    database.close();
  });
});