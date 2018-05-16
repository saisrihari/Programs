<?php
session_start();

if(isset($_SESSION['user']) && isset($_SESSION['passwd']))
{
?>
<form method="post">
<?php
$con = mysql_connect("localhost","root","");
if (!$con)
  {
  die('Could not connect: ' . mysql_error());
  }

mysql_select_db("ivcse", $con);

$result = mysql_query("SELECT * FROM items");    
echo "<a href='Logout.php'> Logout </a>"; 
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
  echo "<td><a href='Cart.php?book=" . $row['bookname'] . "&price=" . $row['price'] . "'><img src='images/cart.jpg' ></a></td>";
  echo "</tr>";
  }
echo "</table>";
mysql_close($con);
?>
</form>
<?php
}
else
{echo "you should login to access Catalogue Page";
echo "<br><br>Click here to <a href='Login.php'>Login</a>";
}
?>
