<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">


    <title>diagnosis</title>
  </head>
  <body>
    <center>

    <h1>diagnosis</h1>
    <h2>Please add diagnosis</h2>
    <form  action="adddiag.php" method="post">

      <label>doctor_id:</label>
      <input type="text" name="d_id" placeholder="Enter a d_id"><br>
      <label>patient_id:</label>
      <input type="text" name="p_id" placeholder="Enter p_id"><br>

      <label>category:</label>
      <input type="text" name="category" placeholder="Enter category"><br>
      <input type="submit"  value="add">

    </form>
    <center>
  </body>
</html>
