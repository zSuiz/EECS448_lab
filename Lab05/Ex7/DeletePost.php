<title>Delete User's Posts confirmation page</title>
<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "qphan1_28", "bachLong67", "qphan1_28");

/* check connection  */
if ($mysqli->connect_errno) 
{
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}

  $PostsGonnaDelete = $_POST["checkbox"];
  if($PostsGonnaDelete == FALSE) 
  {
    echo "Please select at least 1 post to delete.<br>";
  } 
  
  if ($PostsGonnaDelete == TRUE) 
  {
    foreach($PostsGonnaDelete as $contents) 
    {
      $query = "DELETE FROM Posts WHERE post_id = '$contents'";
      
      if($mysqli->query($query) === TRUE) 
      {
        echo "Post ID " .$contents. " has been deleted";
        echo "<br>";
      } 
      else 
      {
        echo "Error: " . $sql . "<br>" . $mysqli->error;
      }
    }
  }
  $mysqli->close(); /* close connection */?>