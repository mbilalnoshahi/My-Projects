<?php
$n=$_POST['t_id'];
$p=$_POST['email'];
$q=$_POST['pwd'];

include("connect.php");
$s="Insert into teacher_login(t_id,email,pwd)
values('$n','$p', '$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
