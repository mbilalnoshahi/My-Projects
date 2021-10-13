<?php
$n=$_POST['prescription_id'];
$p=$_POST['med_quantity'];

include("connect.php");
$s="Insert into prescription(prescription_id,med_quantity)
values('$n','$p')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
