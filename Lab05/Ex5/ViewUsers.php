<title>Table of Users</title>
<?php


$mysqli = new mysqli("mysql.eecs.ku.edu", "qphan1_28", "bachLong67", "qphan1_28");
 /* check connection */
  if($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
  }
echo "<center>";
echo "Table of all Users ";
//echo "<table border='2' ";
echo "<table class='imagetable' border cellpadding=3 style=\"width:30%;\">";
echo "<th>User's name</th><br>";


$UserInfo = "SELECT user_id FROM Users";
$OutPut = $mysqli->query($UserInfo);
$totalNumberUsers;

if ($OutPut->num_rows > 0); 
{
  
     while($row = $OutPut->fetch_assoc()) 
     {
         echo "<tr><td>" .$row["user_id"]. "</td></tr>";
	  $totalNumberUsers++;
     }
   
}

 

  /* close connection */
  $mysqli->close(); 
  echo "</table>";
  echo "Total number of users are: " . $totalNumberUsers . "<br>";
  echo "</center>";
?>