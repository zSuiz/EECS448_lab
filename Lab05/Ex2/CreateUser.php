<title>USER's database</title>
<?php
$mysqli = new mysqli("mysql.eecs.ku.edu", "qphan1_28", "bachLong67", "qphan1_28");

/* check connection  */
if ($mysqli->connect_errno) {
    printf("Connect failed: %s\n", $mysqli->connect_error);
    exit();
}

echo "<br><br>";

$username = $_POST["username"];
// if ($username == "")
//
//     {
//         echo "User's name text box is blanked.<br>";
//     }
//
// else
// {
    $sql = "INSERT INTO Users (user_id) VALUES ('$username')";
    if ($mysqli->query($sql) === TRUE)
    {
        echo "New user was successfully stored in the database.<br>";
    }
    else
    {
        echo "User's name already exists in database.<br>";
    }
// }


/* close connection */
$mysqli->close();
?>
