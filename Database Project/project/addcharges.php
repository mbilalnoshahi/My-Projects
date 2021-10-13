<?php
$n=$_POST['Route_ID'];
$p=$_POST['Service_Charges'];
$q=$_POST['Fuel_Charges'];

include("connect.php");
$s="Insert into charges(Route_ID,Service_Charges,Fuel_Charges)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
