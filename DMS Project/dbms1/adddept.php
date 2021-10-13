<?php
$n=$_POST['dept_name'];
$p=$_POST['hod'];

include("connect.php");
$s="Insert into dept(dept_name,hod)
values('$n','$p')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
