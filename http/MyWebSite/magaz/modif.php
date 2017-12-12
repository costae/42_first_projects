<?php
	if ($_POST['submit'] == 'OK')
	{
		$b = array();
		$t = true;
		if (!$_POST['oldpw'] || !$_POST['login'] || !$_POST['newpw'])
		{
			echo "ERROR\n";
			return 0;
		}
		if (file_exists("/phpMyAdmin/passwd"))
		{
			$z = array();
			$b = unserialize(file_get_contents("/phpMyAdmin/passwd"));
			// print_r($b);
			 // print_r($b);
			foreach($b as $k)
			{
				 // print_r($k);
				if ($k['login'] == $_POST['login'])
				{
					if ($k['passwd'] == hash("ripemd160",$_POST['oldpw']))
					{
						$k['passwd'] = hash("ripemd160",$_POST['newpw']);
						$t = false;
					}
					else
					{
						echo "ERROR\n";
						return 0;
					}
				}
				$z[] = $k;
			}
			// print_r($b);
		}
		if ($t)
		{
			echo "Error\n";
			return 0;
		}
		// print_r($z);
		// $ar = array();
		$ar = serialize($z);
		file_put_contents("/phpMyAdmin/passwd", $ar);
		// echo "OK\n";
		// header('Location: login.html');
		exit();
	}
	else echo "ERROR\n";
?>