<?php
    $servername="localhost";
    $username="root";
    $password="";
    $db="health_care";
    $con=new mysqli($servername, $username, $password,$db);
        if($con->connect_error){
            echo "connection Failed".$con->connect_error;
        }
        else{
          echo "successfully";
      }

 ?>
