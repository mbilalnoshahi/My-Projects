
<head>
<style>
table, td {
    border: 1px solid green;
}
</style>
</head>




<?php
$id=$_POST["d_id"].'';
echo "search for d_id ".$id;
include("connect.php");
$s="select * from doctor where d_id
    like '$id'
    or d_id like '$id'
    or d_name like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td>d_id </td>

      <td>d_name </td>
      <td>gender </td>
      <td>age</td>
      <td>address </td>
      <td>phone</td>

       </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["d_id"]."</td>";
        echo "<td>".$row["d_name"]."</td>";
          echo "<td>".$row["gender"]."</td>";
          echo "<td>".$row["age"]."</td>";
          echo "<td>".$row["address"]."</td>";
          echo "<td>".$row["phone"]."</td>";

           echo "</tr>";
          }
          echo "</table>";







     ?>
