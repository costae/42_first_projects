#!/usr/bin/php
<?php
	if ($argc == 4)
	{
		$n1 = intval($argv[1]);
		$s = $argv[2];
		$n2 = intval($argv[3]);
		$result = 0;
		if (strstr($s, '+'))
			$result = $n1 + $n2;
		else if (strstr($s, '-'))
			$result = $n1 - $n2;
		else if (strstr($s, '/'))
			$result = $n1 / $n2;
		else if (strstr($s, '*'))
			$result = $n1 * $n2;
		else if (strstr($s, '%'))
			$result = $n1 % $n2;
		echo $result."\n";
	}
	else
		echo "Incorrect Parameters\n";
?>