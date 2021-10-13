<?php
$id=$_GET['id'];
include("connect.php");
$s="Update doctor set d_name='Shahid', gender='Male', age='23', address='Attock',phone='6756457' where d_id=$id ";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record updated<a href='viewdoc.php'>Click Here </a>to go back";
}
else {
  echo "record not updated because"
 .mysqli_error($con);
  ;
}





 ?>
