<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from dept where dept_no='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewdept.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
