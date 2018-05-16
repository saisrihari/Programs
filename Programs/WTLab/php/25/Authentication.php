<?php
session_start();
$userName=$_POST['uname'];
$passwd=$_POST['pwd'];

$status="no";

$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("ivcse", $con);
$result = mysql_query("SELECT * FROM login where name ='". $userName . "' and  password ='" . $passwd ."'");

while($row = mysql_fetch_array($result))
  {
  $_SESSION['user']=$row['name'];
  $_SESSION['passwd']=$row['password'];
  $status="yes";
  }

  if($status=="yes")
  {
		header ("Location: Catalogue.php");
   }
  else
    echo "You are not authenticated user";

mysql_close($con);
?>

