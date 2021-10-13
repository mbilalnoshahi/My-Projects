<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>patient</title>
  </head>
  <body>
    <center>

    <h1>patient</h1>
    <h2>please add patient info</h2>
    <form  action="addpat.php" method="post">
      <label>p_id:</label>
      <input type="text" name="p_id" placeholder="Enter a  p_id"><br>
      <label>p_name:</label>
      <input type="text" name="p_name" placeholder="Enter p_name"><br>
      <label>gender:</label>
      <input type="text" name="gender" placeholder="Enter gender"><br>
      <label>age:</label>
      <input type="text" name="age" placeholder="Enter age"><br>
      <label>address:</label>
      <input type="text" name="address" placeholder="Enter address"><br>
      <label>phone:</label>
      <input type="text" name="phone" placeholder="Enter phone"><br>

      <input type="submit"  value="add">

    </form>
    <center>
  </body>
</html>
