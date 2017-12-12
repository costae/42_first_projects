#!/usr/bin/php
<?php
	function checkNum($num)
	{
  		return ($num % 2) ? TRUE : FALSE;
	}
	echo "Enter a number: ";
	while ($n = fgets(STDIN))
	{
		$n = str_replace("\n", "", $n);
		if (is_numeric($n))
		{
			if (checkNum($n))
				echo "The number ".$n." is odd\n";
			else
				echo "The number ".$n." is even\n";
		}
		else
			echo $n." is not a number\n";
		echo "Enter a number: ";
	}
?>