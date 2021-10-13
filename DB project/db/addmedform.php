<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>medicine</title>
  </head>
  <body>
    <center>

    <h1>medicine</h1>
    <h2>please enter medicine info</h2>
    <form  action="addmed.php" method="post">
      <label>med_name:</label>
      <input type="text" name="med_name" placeholder="Enter med_name"><br>
      <label>manufacturer:</label>
      <input type="text" name="manufacturer" placeholder="Enter manufacturer"><br>
      <label>price:</label>
      <input type="text" name="price" placeholder="Enter price"><br>
      <label>med_quantity:</label>
      <input type="text" name="med_quantity" placeholder="Enter med_quantity"><br>
      <label>exp_date:</label>
      <input type="text" name="exp_date" placeholder="Enter exp_date"><br>

      <input type="submit"  value="add">

    </form>
    <center>
  </body>
</html>
