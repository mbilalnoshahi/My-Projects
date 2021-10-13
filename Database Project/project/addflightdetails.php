<?php
$n=$_POST['Flight_Date'];
$p=$_POST['Departure_Time'];
$q=$_POST['Arrival_Time'];
$r=$_POST['Ac_ID'];
$t=$_POST['Charges_ID'];

include("connect.php");
$s="Insert into flight_details(Flight_Date,Departure_Time,Arrival_Time,Ac_ID,Charges_ID)
values('$n','$p', '$q','$r','$t')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
