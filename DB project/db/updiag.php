<?php
$id=$_GET['id'];
include("connect.php");
$s="Update diagnosis set d_id='65', p_id='54', category='Flu' where diagnosis_id=$id ";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record updated<a href='viewdiag.php'>Click Here </a>to go back";
}
else {
  echo "record not updated because"
 .mysqli_error($con);
  ;
}





 ?>
