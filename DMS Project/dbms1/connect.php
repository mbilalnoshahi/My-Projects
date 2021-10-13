<?php
    $servername="localhost";
    $username="root";
    $password="";
    $db="usms";
    $con=new mysqli($servername, $username, $password,$db);
        if($con->connect_error){
            echo "connection Failed".$con->connect_error;
        }
        else{
          echo "successfully";
      }

 ?>
