<?php
setcookie("mycookie1[user1]","pwd1",time()-30);
setcookie("mycookie1[user2]","pwd2",time()-30);
setcookie("mycookie1[user3]","pwd3",time()-30);
setcookie("mycookie1[user4]","pwd4",time()-30);
header("Location:login.php");
?>
