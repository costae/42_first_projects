<?php
	session_start();
	if ($_GET['submit'] == 'OK')
	{
		$_SESSION['login'] = $_GET['login'];
		$_SESSION['passwd'] = $_GET['passwd'];
	}
?>
<!DOCTYPE html>
<html>
<body>

<form method = "GET" action="index.php">
  <input type="text" name="login" value="<?php echo $_SESSION["login"]; ?>">
  <br>
  <input type="text" name="passwd"  value="<?php echo $_SESSION["passwd"]; ?>">
  <br> 
  <input type="submit" value="OK" name="submit">
</form> 
</body>
</html>

