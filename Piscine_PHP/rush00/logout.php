<?php
	session_start();
	
	$_SESSION['loggued_on_user'] = array();
	$_SESSION['logedin'] = false;
	header('Location: index.php');
?>