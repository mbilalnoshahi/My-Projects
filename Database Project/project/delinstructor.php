<?php
$id=$_GET['id'];
include("connect1.php");
$s="Delete from instructor where id='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewinstructor.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
