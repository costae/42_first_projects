#!/usr/bin/php
<?php
if ($argc > 1)
{
	$line = preg_replace('/\s+/', ' ', trim($argv[1]));
	echo  $line."\n";
}
?>