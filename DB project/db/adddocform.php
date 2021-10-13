<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>doctor</title>
  </head>
  <body>
    <center>

    <h1>doctor</h1>
    <h2>please add doctor info</h2>
    <form  action="adddoc.php" method="post">
      <label>d_id:</label>
      <input type="text" name="d_id" placeholder="Enter a  d_id"><br>
      <label>d_name:</label>
      <input type="text" name="d_name" placeholder="Enter d_name"><br>
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
