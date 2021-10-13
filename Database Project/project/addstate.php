<?php
$n=$_POST['State_name'];
$p=$_POST['Ct_ID'];

include("connect.php");
$s="Insert into state(State_name,Ct_ID)
values('$n','$p')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
