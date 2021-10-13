<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>courses</title>
  </head>
  <body>
    <center>

    <h1>courses</h1>
    <h2>Please add courses</h2>
    <form  action="addcourses.php" method="post">
      
      <label>course_name:</label>
      <input type="text" name="c_name" placeholder="Enter a c_name"><br>
      <label>course_teacher:</label>
      <input type="text" name="c_teacher" placeholder="Enter c_teacher"><br>

      <label>credit_hours:</label>
      <input type="text" name="cr_hrs" placeholder="Enter cr_hrs"><br>
      <input type="submit"  value="add">

    </form>
    <center>
  </body>
</html>
