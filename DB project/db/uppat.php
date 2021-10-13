<?php
$id=$_GET['id'];
include("connect.php");
$s="Update patient set p_name='Ikram', gender='Male', age='21', address='RWP',phone='6757657' where p_id=$id ";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record updated<a href='viewpat.php'>Click Here </a>to go back";
}
else {
  echo "record not updated because"
 .mysqli_error($con);
  ;
}





 ?>
