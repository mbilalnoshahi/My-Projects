<?php
$n=$_POST['Emp_name'];
$p=$_POST['Address'];
$q=$_POST['Designation'];
$r=$_POST['Email'];
$t=$_POST['Telep_no'];
$w=$_POST['Pilot_ID'];



include("connect.php");
$s="Insert into employees(Emp_name,Address,Designation,Email,Telep_no,Pilot_ID)
values('$n','$p', '$q','$r','$t','$w')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
