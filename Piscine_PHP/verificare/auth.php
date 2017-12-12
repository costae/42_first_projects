<?php

	function auth($login, $passwd)
	{
		$con = mysqli_connect("localhost","root","","data");
		$b = mysqli_query($con,"SELECT `passwd` FROM users WHERE login='$login';", MYSQLI_STORE_RESULT);
		$data = mysqli_fetch_array($b);
		$p = hash("ripemd160",$passwd);
		if ($data['passwd'] === $p)
		{
			mysqli_close($con);
			return true;
		}
		else
		{
			mysqli_close($con);
			return false;
		}
	}
?>