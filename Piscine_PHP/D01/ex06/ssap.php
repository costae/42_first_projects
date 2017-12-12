#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$dup = preg_split("/[\s,]+/", trim($str));
		sort($dup);
		return($dup);
	}
	$arr = array();
	$i = 1;
	$j = 0;
	for($i = 1; $i < $argc; $i++)
		foreach(ft_split($argv[$i]) as $key)
			$arr[$j++] = $key;
	sort($arr);
	foreach($arr as $hop)
		echo $hop."\n";
?>