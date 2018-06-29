<?php 
echo "IFCreate MySQL Tables<br>"; 
?>
<?php



//***
if (isset($_REQUEST["Table"])) {
    
    $Table=$_REQUEST["Table"];
    
}else{
    $Table="!!!";
}



//***

//***
if (isset($_REQUEST["NumberOfColumns"])) {
    
    $NumberOfColumns=$_REQUEST["NumberOfColumns"];
    
}else{
    $NumberOfColumns="!!!";
}



//*************************************************************************
    $servername = "rostable";
    $username = "HkkdsbnklmlkmgFUIHn";
    $password = "AkOyah3489NKKJHIUG^";
    $dbname = "warcob";
    //$table="new3";
//*************************************************************************




// Create connection
$conn = new mysqli($servername, $username, $password, $dbname);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
echo "Connected successfully<br>";


//*************************************************************************
// Create MySQL Tables
// sql to create table


 


for ($x = 1; $x <= $NumberOfColumns; $x++) {
    echo "<br>The number is: $x <br>";
    echo $name.="A".$x." VARCHAR(50) CHARACTER SET utf8," ;
    
    
} 



$sql = "CREATE TABLE $Table (
ID INT(9) UNSIGNED AUTO_INCREMENT PRIMARY KEY, 
$name
`date` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP
)ENGINE=INNODB AUTO_INCREMENT=1 DEFAULT CHARSET=utf8;";






  if ($conn->query($sql) === TRUE) {
    echo "Table MyGuests created successfully";
} else {
    echo "Error creating table: " . $conn->error;
}
//*************************************************************************
    $conn->close();
    
   


?>