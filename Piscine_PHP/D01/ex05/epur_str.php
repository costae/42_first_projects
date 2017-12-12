#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$dup = preg_split("/[\s]+/", trim($str));
		return($dup);
	}
	$n = 1;
	while($argv[$n])
	{
		$dupl = ft_split($argv[$n]);
		$i = 0;
		while($dupl[$i])
		{
			echo $dupl[$i]." ";
			$i++;
		}
		$n++;
	}
	echo "\n";
?>