<?php
$n=$_POST['Destination'];
$p=$_POST['Airport'];
$q=$_POST['Route_Code'];

include("connect.php");
$s="Insert into route(Destination,Airport,Route_Code)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
