<?php

//***********************************************************

//get the data
//$json = file_get_contents("php://input");
//$array["foo"]
//convert the string of data to an array
//$data = json_decode($json, true);

//$aa1= $data["k1"];
//***************************************************************
//***
if (isset($_REQUEST["Update"])) {
    
    $Update=$_REQUEST["Update"];
    
        //****
        if ($Update){
            //true
        }else{
            //fals
        }
    
}else{
    $Update="!!!";
}


//***
if (isset($_REQUEST["Table"])) {
    
    $Table=$_REQUEST["Table"];
    
}else{
    $Table="!!!";
}


//***
if (isset($_REQUEST["ID"])) {
    
    $ID=$_REQUEST["ID"];
    
}else{
    $ID="!!!";
}

//***
if (isset($_REQUEST["Column"])) {
    
    $Column=$_REQUEST["Column"];
    
}else{
    $Column="!!!";
}


//***
if (isset($_REQUEST["NumberOfColumns"])) {
    
    $NumberOfColumns=$_REQUEST["NumberOfColumns"];
    
}else{
    $NumberOfColumns="!!!";
}


//***
if (isset($_REQUEST["Response"])) {
    
    $Response=$_REQUEST["Response"];
    
}else{
    $Response="!!!";
}


 
//$aa1=["k1"];

//*************************************************************************
    $servername = "rostable";
    $username = "HkkdsbnklmlkmgFUIHn";
    $password = "AkOyah3489NKKJHIUG^";
    $dbname = "warcob";
    //$table="new3";
//*************************************************************************


// $table=$Table;
// Create connection
$conn = new mysqli($servername, $username, $password,$dbname);
// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} 
//ID    Intiger    Text    Float    Intiger2    Intiger3    Intiger4    Intiger5    Intiger6    Intiger7

//$sql = "INSERT INTO game (Intiger1,Text1,Float1) VALUES ('2', 'Doe', '22')";
//************************************************************
 

//echo $_REQUEST["DestroyPlayer"];
    //***

/*
    if (isset($_REQUEST["DestroyPlayer"])) {

        $DestroyPlayer=$_REQUEST["DestroyPlayer"];
        $sql .= "UPDATE $table SET DestroyPlayer='$DestroyPlayer' WHERE id=$ID;";

    }else{
        $DestroyPlayer="!!!";
    }
    //***

*/


//AiPlayer
 //$sql = "UPDATE $table SET location='$location',rotation='$rotation' WHERE ID=$ID;";

//$sql = "UPDATE game SET Text1='$aa2' WHERE ID=$aa1;";
//$sql .= "UPDATE game SET Text1='$aa2' WHERE id=7;";
//query
//multi_query
 //$sql = "UPDATE $table SET DestroyPlayer='$DestroyPlayer' WHERE id=$ID;";
//$sql = "UPDATE $table SET DestroyPlayer='$DestroyPlayer' WHERE id=$ID;";
//$sql = "UPDATE $table SET DestroyPlayer='$DestroyPlayer' WHERE id=$ID;";



//***
if (isset($_REQUEST["Update"])) {
    
   // $Update=$_REQUEST["Update"];
    
        //true****true
        if ($Update=="true"){
            //true
            
            //$sql = "UPDATE $table SET DestroyPlayer='$DestroyPlayer' WHERE id=$ID;";
            //$sql
            $c1='A'."$Column";
           $sql = "UPDATE $Table SET $c1='$Response' WHERE ID=$ID;";
            
            if ($conn->query($sql) === TRUE) {
                echo "New record created successfully000";//multi_query
            } else {
                echo "Error: " . $sql . "<br>" . $conn->error;
            }

            
            
            
            
            
            
            
        //fals****     
        }if ($Update=="false"){
            //false
            //echo "************this mysql is false***********************************";
            
      $sql = "SELECT *
     FROM $Table
     WHERE ID=$ID  ;
     ";
     
     // AND firstname=John ;
     
    $result = $conn->query($sql);
     
    //$c1='A'."$Column";
    if ($result->num_rows > 0) {
        // output data of each row
        while($row = $result->fetch_assoc()) {
             //echo "id: " . $row["id"]. " - Name: " . $row["firstname"]. " " . $row["lastname"]. "<br>";
            //echo $row["firstname"]."::".$row["firstname"]."::".$row["firstname"] ;
            
        
            
            
            for ($x = 1; $x <= $NumberOfColumns; $x++) {
                //echo "The number is: $x <br>";
                $c1='A'."$x";
                //echo "NumberOfColumns".$NumberOfColumns;
                //echo "**********Columns".$c1."**********";
                echo $row["$c1"]."::";
                
            } 
            
        }
    } else {
        echo "0 results";
    }
            
            
            
            
            
            
            
        }
    
}else{
    $Update="!!!";
}















/*


if ($conn->multi_query($sql) === TRUE) {
    echo "New record created successfully000";//multi_query
} else {
    echo "Error: " . $sql . "<br>" . $conn->error;
}
*/
$conn->close();





?>