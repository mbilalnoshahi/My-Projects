<?php
$n=$_POST['name'];
$p=$_POST['designation'];
$q=$_POST['aoi'];

include("connect.php");
$s="Insert into instructor(name,designation,aoi)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
