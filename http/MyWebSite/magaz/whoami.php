<?php
	session_start();
	if (!$_SESSION["loggued_on_user"])
	{
		echo "ERROR\n";
		return 0;
	}
	echo $_SESSION["loggued_on_user"]."\n";
?>