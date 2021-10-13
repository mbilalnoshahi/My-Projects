<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from state where id='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewstate.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
