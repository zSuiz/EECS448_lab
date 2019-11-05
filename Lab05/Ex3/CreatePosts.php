<title>User Post Confirmation page</title>
<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "qphan1_28", "bachLong67", "qphan1_28");

/* check connection  */
if ($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}



$username = $_POST["username"];
$post = $_POST["message"];
$result = $mysqli->query("SELECT * FROM Users WHERE user_id = '$username'");
// $result = $mysqli->query("SELECT user_id FROM Users WHERE user_id = '$username'"); also work just fine

    if ($result->num_rows === 0)
    {
        echo "User's name not found.<br>";
    }
    else {
      if ($post == NULL || $post == "")
      {
          echo "Post has no content.<br>";
      }
      elseif (!$username == "" && $result->num_rows > 0)
      {
          $sql = $mysqli->query("INSERT INTO Posts (content, author_id) VALUES ('$post','$username')");
          echo "<h2>Post saved.</h2><br>";
      }

    }

/* close connection */
$mysqli->close();
?>
