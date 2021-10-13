<?php
$id=$_GET['id'];
include("connect.php");
$s="Update medicine set med_name='panadol', manufacturer='Ali', price='100' , med_quantity='20',exp_date='12-01-2012' where med_id=$id ";
$query=mysqli_query($con,$s);
if($query)
{
  echo "record updated<a href='viewmed.php'>Click Here </a>to go back";
}
else {
  echo "record not updated because"
 .mysqli_error($con);
  ;
}





 ?>
