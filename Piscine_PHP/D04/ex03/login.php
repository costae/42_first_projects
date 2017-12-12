<?php
	include("auth.php");
	$l = $_GET['login'];
	$p = hash("ripemd160",$_GET['passwd']);
	session_start();
	// echo $l.$_GET['passwd'];
	if (auth($l,$_GET['passwd']) == true)
	{	$_SESSION["loggued_on_user"] = $l; 
		echo "OK\n";
	}
	else 
	{
		$_SESSION["loggued_on_user"] = $l;
		echo "ERROR\n";
	}
?>