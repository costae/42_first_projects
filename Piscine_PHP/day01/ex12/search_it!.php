#!/usr/bin/php
<?php
	if($argc > 1)
	{
		$str = $argv[1];
		for ($i = 2; $i < $argc; $i++)
		{
			if(strstr($argv[$i], $str))
			{
				$arr = explode(':', $argv[$i]);
				$dup = $arr[1];
			}
		}
	}
	echo $dup;
?>