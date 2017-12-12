#!/usr/bin/php
<?php
	function is_alpha($str)
	{
		for ($i = 0; $i < strlen($str); $i++)
		{
			if (!($str[$i] >= 'a' && $str[$i] <= 'z') && !($str[$i] >= 'A' && $str[$i] <= 'Z'))
				return (0);
		}
		return (1);
	}
	function ft_split($str)
	{
		$dup = preg_split("/[\s]+/", $str);
		sort($dup);
		return($dup);
	}
	$arr = array();
	$i = 1;
	$j = 0;
	for($i = 1; $i < $argc; $i++)
		foreach(ft_split($argv[$i]) as $key)
			$arr[$j++] = $key;
	sort($arr, SORT_STRING | SORT_FLAG_CASE);
	$b = $arr;
	sort($b,SORT_STRING);
	foreach($arr as $hop)
		if (is_alpha($hop))
			echo $hop."\n";
	foreach($b as $hop)
		if (is_numeric($hop))
			echo $hop."\n";
	foreach($arr as $hop)
		if (!is_alpha($hop) && !is_numeric($hop))
			echo $hop."\n";
?>
