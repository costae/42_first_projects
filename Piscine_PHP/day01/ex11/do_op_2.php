#!/usr/bin/php
<?php
	if ($argc == 2)
	{
		$res = 0;
		if(strstr($argv[1], '-'))
		{
			$arr = explode('-', $argv[1]);
			$n1 = trim($arr[0]);
			$n2 = trim($arr[1]);
			if (is_numeric($n1) && is_numeric($n2) && !$arr[2]){
				$res = intval($n1) - intval($n2);
				echo $res."\n";
			}
			else
				echo "Syntax error\n";
		}
		else if(strstr($argv[1], '+'))
		{
			$arr = explode('+', $argv[1]);
			$n1 = trim($arr[0]);
			$n2 = trim($arr[1]);
			if (is_numeric($n1) && is_numeric($n2) && !$arr[2]){
				$res = intval($n1) + intval($n2);
				echo $res."\n";
			}
			else
				echo "Syntax error\n";
		}
		else if(strstr($argv[1], '*'))
		{
			$arr = explode('*', $argv[1]);
			$n1 = trim($arr[0]);
			$n2 = trim($arr[1]);
			if (is_numeric($n1) && is_numeric($n2) && !$arr[2]){
				$res = intval($n1) * intval($n2);
				echo $res."\n";
			}
			else
				echo "Syntax error\n";
		}
		else if(strstr($argv[1], '/'))
		{
			$arr = explode('/', $argv[1]);
			$n1 = trim($arr[0]);
			$n2 = trim($arr[1]);
			if (is_numeric($n1) && is_numeric($n2) && !$arr[2]){
				$res = intval($n1) / intval($n2);
				echo $res."\n";
			}
			else
				echo "Syntax error\n";
		}
		else if(strstr($argv[1], '%'))
		{
			$arr = explode('%', $argv[1]);
			$n1 = trim($arr[0]);
			$n2 = trim($arr[1]);
			if (is_numeric($n1) && is_numeric($n2) && !$arr[2]){
				$res = intval($n1) % intval($n2);
				echo $res."\n";
			}
			else
				echo "Syntax error\n";
		}
	}
	else
		echo "Incorrect Parameters\n";
?>