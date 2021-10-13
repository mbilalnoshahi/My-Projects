<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from flight_details where Flight_ID='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewflightdetails.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
