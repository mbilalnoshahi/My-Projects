<?php
$n=$_POST['exam_date'];
$p=$_POST['dept'];
$q=$_POST['result'];

include("connect.php");
$s="Insert into examination(exam_date,dept,result)
values('$n','$p','$q')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
