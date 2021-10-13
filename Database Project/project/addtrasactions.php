<?php
$n=$_POST['Flight_ID'];
$p=$_POST['Charges_ID'];
$q=$_POST['Ps_ID'];
$r=$_POST['Emp_ID'];


include("connect.php");
$s="Insert into trasactions(Flight_ID,Charges_ID,Ps_ID,Emp_ID)
values('$n','$p', '$q','$r')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
