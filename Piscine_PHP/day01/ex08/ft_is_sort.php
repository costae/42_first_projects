#!/usr/bin/php
<?php
	function ft_is_sort($arr1)
	{
		$arr2 = $arr1;
		sort($arr2);
		return ($arr1 === $arr2);
	}
?>