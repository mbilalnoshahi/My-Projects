<?php
$n=$_POST['p_name'];
$p=$_POST['gender'];
$q=$_POST['age'];
$r=$_POST['address'];
$t=$_POST['phone'];

include("connect.php");
$s="Insert into patient(p_name,gender,age,address,phone)
values('$n','$p', '$q','$r', '$t')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
