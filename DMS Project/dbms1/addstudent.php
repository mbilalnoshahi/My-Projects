<?php
$n=$_POST['std_name'];
$p=$_POST['dept'];
$q=$_POST['gpa'];
$r=$_POST['cgpa'];
$t=$_POST['semester'];
$w=$_POST['performance'];



include("connect.php");
$s="Insert into student(std_name,dept,gpa,cgpa,semester,performance)
values('$n','$p', '$q','$r','$t','$w')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
