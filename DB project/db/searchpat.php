
<head>
<style>
table, td {
    border: 1px solid green;
}
</style>
</head>




<?php
$id=$_POST["p_id"].'';
echo "search for p_id ".$id;
include("connect.php");
$s="select * from patient where p_id
    like '$id'
    or p_id like '$id'
    or p_name like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td>p_id </td>

      <td>p_name </td>
      <td>gender </td>
      <td>age</td>
      <td>address </td>
      <td>phone</td>

       </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["p_id"]."</td>";
        echo "<td>".$row["p_name"]."</td>";
          echo "<td>".$row["gender"]."</td>";
          echo "<td>".$row["age"]."</td>";
          echo "<td>".$row["address"]."</td>";
          echo "<td>".$row["phone"]."</td>";

           echo "</tr>";
          }
          echo "</table>";







     ?>
