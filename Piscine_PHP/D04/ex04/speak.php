<?php
	session_start();
	if ($_SESSION["loggued_on_user"] == "")
	{
		header("Location: index.html");
	}
	if ($_POST['msg'] != '')
	{
	if (file_exists("private/chat"))
	{
		$b = array();
		$z = array();
		$b = unserialize(file_get_contents("private/chat"));
	}
	$k = array();
	$k['time'] = time();
	$k['login'] = $_SESSION["loggued_on_user"];
	$k['msg'] = $_POST['msg'];
	// print_r($k);
	$b[] = $k;
	// var_dump($_REQUEST);
	// print_r(serialize($b));
	$fo = fopen('private/chat', 'r'); 
        $locked = flock($fo, LOCK_SH, $waitIfLocked); 
        
        if(!$locked) { 
            file_put_contents('private/chat', serialize($b));
        } 
        else { 
            // $cts = file_get_contents('private/chat'); 
            file_put_contents('private/chat', serialize($b));
            flock($fo, LOCK_UN); 
            fclose($fo); 
            
        }
}
?>
<!DOCTYPE html>
<head>

<style type="text/css">
	body
	{
		overflow: hidden;
	}
</style>
</head>
<html>
<body>
<form method = "POST" action="speak.php">
<input type="text" name="msg" style="width:100%; height:60px;">
</form>
<script langage="javascript">top.frames['chat'].location = 'chat.php';</script>
</body>
</html>