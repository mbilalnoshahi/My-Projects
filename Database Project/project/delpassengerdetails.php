<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from passenger_details where id='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewpassengerdetails.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
