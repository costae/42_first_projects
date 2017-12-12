#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$dup = preg_split("/[\s,]+/", trim($str));
		return($dup);
	}
	if ($argc == 1)
		exit (1);
	$arr = ft_split($argv[1]);
	$i = 1;
	$n = count($arr);
	while($i < $n)
	{
		echo $arr[$i]." ";
		$i++;
	}
	echo $arr[0]."\n";
?>
