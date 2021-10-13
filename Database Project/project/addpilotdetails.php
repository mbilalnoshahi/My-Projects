<?php
$n=$_POST['Pilot_Name'];
$p=$_POST['Contact_no'];
$q=$_POST['Address'];

include("connect.php");
$s="Insert into pilot_details(Pilot_Name,Contact_no,Address)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
