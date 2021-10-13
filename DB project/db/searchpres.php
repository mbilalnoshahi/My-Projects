    <style>
    table, td {
        border: 1px solid green;
    }
    </style>



<?php

$id=$_POST["prescription_id"].'';
echo "search for prescription_id ".$id;
include("connect.php");
$s="select * from prescription where prescription_id
    like '$id'
    or prescription_id like '$id'
    or med_quantity like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td>prescription_id </td>

      <td>med_quantity </td>
       </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["prescription_id"]."</td>";
        echo "<td>".$row["med_quantity"]."</td>";
        
           echo "</tr>";
          }
          echo "</table>";







     ?>
