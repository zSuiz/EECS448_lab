<?php
error_reporting(E_ALL);
ini_set("display_errors", 1);

echo "<table border=\"0\t\">";

      for ($i = 0; $i <= 100; $i++)
      {
        echo('<tr>');

        for ($k = 0; $k <= 100; $k++)
          {
            if($i == 0)
            {
              if($k == 0)
              {
                echo ("<th>    </th>");
              }
              else
              {
                echo "<td>$k</td>";
              }
            }
            else
            {
              if($k == 0)
              {
                echo "<td>$i</td>";
              }
              else
              {
                echo "<td>" .$i * $k. "</td>";
              }
            }
          }
            echo('</tr>');
      }

echo("</table>");
?>
