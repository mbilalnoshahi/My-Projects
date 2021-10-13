<?php
$n=$_POST['med_name'];
$p=$_POST['manufacturer'];
$q=$_POST['price'];
$r=$_POST['med_quantity'];
$t=$_POST['exp_date'];

include("connect.php");
$s="Insert into medicine(med_name,manufacturer,price,med_quantity,exp_date)
values('$n','$p','$q',$r,$t)";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
