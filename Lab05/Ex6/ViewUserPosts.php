<title>View User's Posts</title>
<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "qphan1_28", "bachLong67", "qphan1_28");

/* check connection  */
if ($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}

 
 $username = $_POST['usernames'];
 $posts = "SELECT * FROM Posts WHERE author_id='$username '";
 echo "Here are the list(s) of the user you selected: ";
 echo "</br>";
 echo "</br>";
 echo "User id:  ";
 echo $username ;
 echo "</br>";
 echo "<table border=\"2\">";
  if($result = $mysqli->query($posts)) {
    /* fetch associative array */
    while($row = $result->fetch_assoc()) {
        echo "<tr><td>" .$row["content"]. "</td></tr>";
    }
    $result->free(); /* free result set */
  }
 echo "</table>";
/* close connection */
$mysqli->close();
?>