
<?php
  error_reporting(E_ALL);
  ini_set("display_errors", 1);


  echo "<link rel = 'stylesheet' href = 'style.css'>";
  echo "<center>";
  echo "<h1>Thank You For Shopping at Rainy's Day Store!</h1><br><br>";
  echo "<h2>Here is your receipt</h2><br></center>";



  $umbrella = $_POST["umbrella"];
  $boot     = $_POST["boot"];
  $coat     = $_POST["coat"];
  $email    = $_POST["userEmail"];
  $password = $_POST["password"];
  $shipOption     = $_POST["ShippingCOST"];

  echo "<p>Username: ".$email."</p>";
  echo "<p>Password: ".$password."</p>";


  function PickShipping($option)
  {
    if($option == "Free7days"){
      return 0;
    }
    else if($option == "ThreeDays")
    {
      return 5;
    }
    else if($option == "OverNight")
    {
      return 50;
    }
  }

  echo "<table align = 'center' border=1 border-color= 'black' style= 'width:60%'>";
  $shipcost = PickShipping($shipOption);
  $SubTotal = 21.99*$umbrella + 19.99*$boot + 10.99*$coat;
  $TotalWithShipping    = $shipcost + $SubTotal;

  echo "<tr>";
  echo "<th></th>";
  echo "<th>Quantity</th>";
  echo "<th>Cost Per Item</th>";
  echo "<th>Sub Total</th>";
  echo "</tr>";

  echo "<tr>";
  echo "<td>Ninja Umbrella</td>";
  echo "<td>".$umbrella."</td>";
  echo "<td>$21.99</td>";
  echo "<td>$".($umbrella*21.99)."</td>";
  echo "</tr>";

  echo "<tr>";
  echo  "<td>Women's Midd-C Rains boot</td>";
  echo "<td>".$boot."</td>";
  echo "<td>$19.99</td>";
  echo "<td>$".($boot*19.99)."</td>";
  echo "</tr>";

  echo "<tr>";
  echo  "<td>Kid's Coat</td>";
  echo "<td>".$coat."</td>";
  echo "<td>$10.99</td>";
  echo "<td>$".($coat*10.99)."</td>";
  echo "</tr>";

  echo "<tr>";
  echo "<th></th>";
  echo "<th></th>";
  echo "<th></th>";
  echo "<td><h4>$".$SubTotal ."</h4></td>";
  echo "</tr>";

  echo "<tr>";
  echo "<th>Shipping: </th>";
  echo "<th></th>";
  echo "<th></th>";
  echo "<td> ".$shipOption." ($$shipcost) </td>";
  echo "</tr>";

  echo "<tr>";
  echo "<th> <h2> Total: </h2></th>";
  echo "<th></th>";
  echo "<th></th>";
  echo "<th>$".$TotalWithShipping ."</th>";
  echo "</tr>";


  echo "</table>";
?>
