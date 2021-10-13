<?php
$n=$_POST['std_id'];
$p=$_POST['std_name'];
$q=$_POST['dept'];

include("connect.php");
$s="Insert into sadm_no(std_id,std_name,dept)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
