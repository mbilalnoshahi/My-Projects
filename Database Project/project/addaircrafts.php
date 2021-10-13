<?php
$n=$_POST['Ac_Number'];
$p=$_POST['Capacity'];
$q=$_POST['Manufactured_By'];
$r=$_POST['Manufactured_Date'];

include("connect.php");
$s="Insert into aircrafts(Ac_Number,Capacity,Manufactured_By,Manufactured_Date)
values('$n','$p', '$q','$r')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
