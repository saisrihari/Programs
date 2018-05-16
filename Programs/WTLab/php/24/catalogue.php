<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("ivcse", $con);

$result = mysql_query("SELECT * FROM items");    

echo "<table border='1'>
<tr>
<th>Snap shot of Cover Page</th>
<th>Book Name <br>Auther Name<br>Publisher</th>
<th>Price</th>
<th>Add to Cart</th>
</tr>";

while($row = mysql_fetch_array($result))
  {
  echo "<tr>";
  echo "<td><img src='images/". $row['bookname'] . ".jpg' ></td>";
  echo "<td>Book :" . $row['bookname'] . "<br>Author :" . $row['author'] . "<br>Publication :" . $row['publisher'] . "</td>";
  echo "<td>$" . $row['price'] . "</td>";
  echo "<td><img src='images/cart.jpg' ></td>";
  echo "</tr>";
  }
echo "</table>";

mysql_close($con);
?>
