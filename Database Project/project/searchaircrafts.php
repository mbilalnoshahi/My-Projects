


    <style>
    table, td {
        border: 1px solid green;
    }
    </style>




<?php
$id=$_POST["Capacity"].'';
echo "search for Ac_ID ".$id;
include("connect.php");
$s="select * from aircrafts where Capacity
    like '$id'
    or Ac_Number like '$id'
    or AC_ID like '$id'
    ";
    $query=mysqli_query($con,$s);

    echo "<br>";
    echo "<table table-border='1'>";
    echo "<tr>
      <td> Ac_ID </td>

      <td>Ac_Number</td>
      <td>Capacity </td>
      <td>Manufactured_By </td>
      <td>Manufactured_Date </td>
       </tr>";

      while($row=mysqli_fetch_array($query))
    {

      echo "<tr><td>".$row["Ac_ID"]."</td>";
        echo "<td>".$row["Ac_Number"]."</td>";
          echo "<td>".$row["Manufactured_By"]."</td>";
          echo "<td>".$row["Capacity"]."</td>";
            echo "<td>".$row["Manufactured_Date"]."</td>";


           echo "</tr>";
          }
          echo "</table>";







     ?>
