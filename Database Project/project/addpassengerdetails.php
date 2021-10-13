<?php
$n=$_POST['Ps_name'];
$p=$_POST['Age'];
$q=$_POST['Gender'];
$r=$_POST['Address'];
$t=$_POST['Nationalities'];
$u=$_POST['Cnt_ID'];

include("connect.php");
$s="Insert into passenger_details(Ps_name,Age,Gender,Address,Nationalities,Cnt_ID)
values('$n','$p', '$q','$r','$t','$u')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
