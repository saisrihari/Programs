<?php
session_start();
(int)$_SESSION['xml']="0";
(int)$_SESSION['ai']="0";
(int)$_SESSION['java']="0";
(int)$_SESSION['html']="0";
?>
<html>
<head>
<title>Authentication through database</title>
</head><body>
<form method="post" action="Authentication.php">
Username: <input type="text" name="uname" id="uname" /><br>
Password: <input type="password" name="pwd" id="pwd" /><br>

<input type="submit" value="Submit" >
</form>
</body>
</html>
