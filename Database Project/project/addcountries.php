<?php
$n=$_POST['Ct_name'];

include("connect.php");
$s="Insert into countries(Ct_name)
values('$n')";
$query=mysqli_query($con,$s);
if(!$query)
echo mysqli_error($con);
 ?>
