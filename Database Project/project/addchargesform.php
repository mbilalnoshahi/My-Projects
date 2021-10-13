<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>Charges</title>
  </head>
  <body>
    <center>

    <h1>Charges</h1>
    <h2>Please Enter the Charges here...</h2>
    <form  action="addcharges.php" method="post">
      <label>Route_ID:</label>
      <input type="text" name="Route_ID" placeholder="Enter a  Route_ID"><br>
      <label>Service_Charges:</label>
      <input type="text" name="Service_Charges" placeholder="Enter Service_Charges"><br>
      <label>Fuel_Charges:</label>
      <input type="text" name="Fuel_Charges" placeholder="Enter Fuel_Charges"><br>
      <input type="submit"  value="add">

    </form>
    <center>
  </body>
</html>
