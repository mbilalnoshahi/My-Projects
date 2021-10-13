<?php
$n=$_POST['d_id'];
$p=$_POST['p_id'];
$q=$_POST['category'];

include("connect.php");
$s="Insert into diagnosis(d_id,p_id,category)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
