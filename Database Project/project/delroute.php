<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from route where Route_ID='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewroute.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
