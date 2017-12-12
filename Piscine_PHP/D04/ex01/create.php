<?php

	if ($_POST['submit'] == 'OK')
	{
		$b = array();

		if (!$_POST['passwd'] || !$_POST['login'])
		{
			echo "ERROR\n";
			return 0;
		}
		if (file_exists("private/passwd"))
		{
			$b = unserialize(file_get_contents("private/passwd"));
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
		}else
		{
			mkdir("private");
		}
		// $ar = array();
		$c = $_POST;
		$c['passwd'] = hash("ripemd160",$c['passwd']);
		unset($c['submit']);
		$b[] = $c;
		$ar = serialize($b);
		file_put_contents("private/passwd", $ar);
		echo "OK\n";
	}
	else echo "ERROR\n";

?>