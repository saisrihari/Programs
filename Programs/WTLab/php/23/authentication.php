<?php
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
  $status="yes";
  }

if($status=="yes")
echo "Welcome to <b> ". $userName ."</b>";
else
echo "You are not authenticated user";

mysql_close($con);
?>
