<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from examination where exam_id='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewexam.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
