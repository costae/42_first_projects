#!/usr/bin/php
<?php
	function ft_split($str)
	{
		$dup = preg_split("/[\s]+/", trim($str));
		sort($dup);
		return($dup);
	}
?>