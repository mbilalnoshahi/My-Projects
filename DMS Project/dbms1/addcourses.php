<?php
$n=$_POST['c_name'];
$p=$_POST['c_teacher'];
$q=$_POST['cr_hrs'];

include("connect.php");
$s="Insert into courses(c_name,c_teacher,cr_hrs)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
