<?php
	include("auth.php");
	$l = $_POST['login'];
	$p = hash("ripemd160",$_POST['passwd']);
	session_start();
	// echo $l.$_GET['passwd'];
	if (auth($l,$_POST['passwd']) === true)
	{	$_SESSION["loggued_on_user"] = $l; 
		echo "OK\n";
	}
	else 
	{
		$_SESSION["loggued_on_user"] = $l;
		echo "ERROR\n";
	}
	// header('Location: index.html');
	// exit();
?>