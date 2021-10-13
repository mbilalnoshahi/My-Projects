<?php
$n=$_POST['Cnt_ID'];
$p=$_POST['Email'];
$q=$_POST['Cell'];
$r=$_POST['Telephone'];
$t=$_POST['Street'];
$u=$_POST['State_ID'];


include("connect.php");
$s="Insert into contact_details(Cnt_ID,Email,Cell,Telephone,Street,State_ID)
values('$n','$p', '$q','$r','$t','$u')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
