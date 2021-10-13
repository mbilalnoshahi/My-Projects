
<head>
<style>
table, td {
    border: 1px solid green;
}
</style>
</head>




<?php
$id=$_POST["med_id"].'';
echo "search for med_id ".$id;
include("connect.php");
$s="select * from medicine where med_id
    like '$id'
    or med_name like '$id'
    or med_id like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td>med_id </td>

      <td>med_name </td>
      <td>manufacturer </td>
      <td>price </td>
      <td>med_quantity </td>
      <td>exp_date </td>

       </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["med_id"]."</td>";
        echo "<td>".$row["med_name"]."</td>";
          echo "<td>".$row["manufacturer"]."</td>";
          echo "<td>".$row["price"]."</td>";
          echo "<td>".$row["med_quantity"]."</td>";
          echo "<td>".$row["exp_date"]."</td>";


           echo "</tr>";
          }
          echo "</table>";







     ?>
