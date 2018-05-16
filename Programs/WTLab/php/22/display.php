Display.php
<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("ivcse", $con);

$result = mysql_query("SELECT * FROM  login");
echo "<table border='1'>
<tr>
<th>Name</th>
<th>Password</th>
<th>Email</th>
<th>Phone Number</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td>" . $row['name'] . "</td>";
  echo "<td> Not shown</td>";
  echo "<td>" . $row['email'] . "</td>";
  echo "<td>" . $row['phno'] . "</td>";
  echo "</tr>";
  }
echo "</table>";

mysql_close($con);
?>

