<?php

	if ($_POST['submit'] == 'OK')
	{
		$b = array();

		if (!$_POST['passwd'] || !$_POST['login'])
		{
			echo "ERROR\n";
			return 0;
		}
		if (file_exists("/phpMyAdmin/passwd"))
		{
			$b = unserialize(file_get_contents("/phpMyAdmin/passwd"));
			// print_r($b);
			// print_r($b);
			foreach($b as $k)
			{
				// print_r($k);
				if ($k['login'] == $_POST['login'])
				{
					echo "ERROR\n";
					return 0;
				}
			}
			// print_r($b);
		}
		// $ar = array();
		$c = $_POST;
		$c['passwd'] = hash("ripemd160",$c['passwd']);
		unset($c['submit']);
		$b[] = $c;
		$ar = serialize($b);
		file_put_contents("/phpMyAdmin/passwd", $ar);
		echo "OK\n";
		// header('Location: /magaz/login.html');
		exit();
	}
	else echo "ERROR\n";

?>