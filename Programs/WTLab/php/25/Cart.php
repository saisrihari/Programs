<?php
session_start();

if(isset($_SESSION['user']) && isset($_SESSION['passwd']))
{

$price=$_GET['price'];
$book=$_GET['book'];

if($book=="XML Bible"){
$_SESSION['xml']++;
}
if($book=="AI"){
$_SESSION['ai']++;
}
if($book=="Java 2"){
$_SESSION['java']++;
}
if($book=="HTML in 24 hours"){
$_SESSION['html']++;
}
?>

<br /> If you want to purchase some more item, click here <a href="Catalogue.php">Catalogue</a> Page.<br />
<table border="1">
<tr><th>Book Name</th><th>Price</th><th>Quantity</th><th>Amout</th></tr>

<?php
echo "<tr><td>XML</td><td>$40.500</td><td>".$_SESSION['xml']."</td><td>$".$_SESSION['xml']*40.5 ."</td><tr>";
echo "<tr><td>AI</td><td>$63.000</td><td>".$_SESSION['ai']."</td><td>$".$_SESSION['ai']*63.000 ."</td><tr>";
echo "<tr><td>Java 2</td><td>$35.500</td><td>".$_SESSION['java']."</td><td>$".$_SESSION['java']*35.500 ."</td><tr>";
echo "<tr><td>HTML in 24 hours</td><td>$50.000</td><td>".$_SESSION['html']."</td><td>$".$_SESSION['html']*50.000 ."</td><tr>";
echo "<tr><td colspan='3'><b>Total</b></td><td>$".(($_SESSION['xml']*40.5)+($_SESSION['ai']*63.000)+($_SESSION['java']*35.500)+($_SESSION['html']*50.000))."</td></tr>";
?>

</table>
<?php
}
else
{echo "you should login to access Cart Page";
echo "<br><br>Click here to <a href='Login.php'>Login</a>";
}
?>
