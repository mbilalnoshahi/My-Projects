<?php
$id=$_GET['id'];
include("connect.php");
$s="Delete from contact_details where Cnt_ID='$id'";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record Delete<a href='viewcontactdetails.php'>Click Here </a>to go back";
}
else {
  echo "record not delete because"
 .mysqli_error($con);
  ;
}





 ?>
