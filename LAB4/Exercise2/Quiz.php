<?php



$Q1 = $_POST["Q1"];
$Q2 = $_POST["Q2"];
$Q3 = $_POST["Q3"];
$Q4 = $_POST["Q4"];
$Q5 = $_POST["Q5"];


$CounterCorrect = 0;
$Percentage     = 0;



  echo "<br><br><br><br><br><br><div align=center><h4>Who is in charge of the executive branch?</h4><br>
        Your answer: ".$Q1."<br>
        Correct Answer: <i>The President of the United States </i><br><hr></div>";


  echo "<div align=center><h4>What do we call the first ten amendments to the Constitution?</h4><br>
        Your answer: ".$Q2."<br>
        Correct Answer: <i>The Bill of Rights </i><br><hr></div>";


  echo "<div align=center><h4>How many amendments does the Constitution have?</h4><br>
        Your answer: ".$Q3."<br>
        Correct Answer: <i>27 </i><br><hr></div>";


  echo "<div align=center><h4>How many U.S. Senators are there?</h4><br>
        Your answer: ".$Q4."<br>
        Correct Answer: <i>100 </i><br><hr></div>";


  echo "<div align=center><h4>The House of Representatives has how many voting members?</h4><br>
        Your answer: ".$Q5."<br>
        Correct Answer: <i>435 </i><br><hr></div>";


if($Q1 == "The President of the United States")
{
  $CounterCorrect++;
}
if($Q2 == "The Bill of Rights")
{
  $CounterCorrect++;
}
if($Q3 == "27")
{
  $CounterCorrect++;
}
if($Q4 == "100")
{
  $CounterCorrect++;
}
if($Q5 == "435")
{
  $CounterCorrect++;
}

$Percentage = ($CounterCorrect / 5)*100;
echo "<div align=center><h4>You got: $CounterCorrect out of 5 questions correct! </h4><br></div>";
echo "<div align=center><h4>You got: $Percentage %</h4><br></div>";

if($Percentage == 0)
{
  echo "<div align=center> You got F-</div>";
}
if($Percentage == 20)
{
  echo "<div align=center>You got F+</div>";
}
if($Percentage == 40)
{
  echo "<div align=center>You got D-</div>";
}
if($Percentage == 60)
{
  echo "<div align=center>You got D+</div>";
}
if($Percentage == 80)
{
  echo "<div align=center>You got B+</div>";
}
if($Percentage == 100)
{
  echo "<div align=center>You got A+</div>";
}




?>
