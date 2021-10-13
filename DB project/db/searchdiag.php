


    <style>
    table, td {
        border: 1px solid green;
    }
    </style>




<?php
$id=$_POST["diagnosis_id"].'';
echo "search for diagnosis_id ".$id;
include("connect.php");
$s="select * from diagnosis where diagnosis_id
    like '$id'
    or d_id like '$id'
    or diagnosis_id like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td> diagnosis_id </td>

      <td>d_id</td>
      <td>p_id </td>
      <td>category </td>
      </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["diagnosis_id"]."</td>";
        echo "<td>".$row["d_id"]."</td>";
          echo "<td>".$row["p_id"]."</td>";
          echo "<td>".$row["category"]."</td>";


           echo "</tr>";
          }
          echo "</table>";







     ?>
