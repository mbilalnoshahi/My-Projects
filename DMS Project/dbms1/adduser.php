<?php
$n=$_POST['email'];
$p=$_POST['pwd'];

include("connect.php");
$s="Insert into user(email,pwd)
values('$n','$p')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
