#!/usr/bin/php
<?php
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
	natcasesort($arr);
	foreach($arr as $hop)
		if (ctype_alpha($hop))
			echo $hop."\n";
	foreach($arr as $hop)
		if (is_numeric($hop))
			echo $hop."\n";
	foreach($arr as $hop)
		if (!ctype_alpha($hop) && !is_numeric($hop))
			echo $hop."\n";
?>