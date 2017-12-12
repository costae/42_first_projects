#!/usr/bin/php
<?php
	if ($argc != 2)
	{
	    return ;
	}
	$line = explode(" ", $argv[1]);
	if (count($line) != 5)
	{
	    echo "Wrong Format\n";
	    return;
	}
	$replaced = implode(" ", $line);
	if (preg_match("/[0-9][0-9]:[0-9][0-9]:[0-9][0-9]/", $replaced) != 1)
	{
	    echo "Wrong Format\n";
	    return;
	}
	$new = $replaced;
	$replaced = preg_replace('/[Dd]imanche/', '0', $replaced);
	$replaced = preg_replace('/[Ll]undi/', '1', $replaced);
	$replaced = preg_replace('/[Mm]ardi/', '2', $replaced);
	$replaced = preg_replace('/[Mm]ercredi/', '3', $replaced);
	$replaced = preg_replace('/[Jj]eudi/', '4', $replaced);
	$replaced = preg_replace('/[Vv]endredi/', '5', $replaced);
	$replaced = preg_replace('/[Ss]amedi/', '6', $replaced);
	if ($new === $replaced)
	{
	    echo "Wrong Format\n";
	    return;
	}
	$new = $replaced;
	$replaced = preg_replace("/[Jj]anvier/", '01', $replaced);
	$replaced = preg_replace('/[Ff]évrier/', '02', $replaced);
	$replaced = preg_replace('/[Mm]ars/', '02', $replaced);
	$replaced = preg_replace('/[Aa]vril/', '03', $replaced);
	$replaced = preg_replace('/[Mm]ai/', '05', $replaced);
	$replaced = preg_replace('/[Jj]uin/', '06', $replaced);
	$replaced = preg_replace('/[Jj]uillet/', '07', $replaced);
	$replaced = preg_replace('/[Aa]oût/', '08', $replaced);
	$replaced = preg_replace('/[Ss]eptembre/', '09', $replaced);
	$replaced = preg_replace('/[Oo]ctobre/', '10', $replaced);
	$replaced = preg_replace('/[Nn]ovembre/', '11', $replaced);
	$replaced = preg_replace('/[Dd]écembre/', '12', $replaced);
	if ($new === $replaced)
	{
	    echo "Wrong Format\n";
	    return;
	}
	if ($trecut === FALSE)
	{
	    echo "Wrong Format\n";
	    return;
	}
	unset($line[0]);
	$original = implode(" ", $line);
	$original = preg_replace("/[Jj]anvier/", 'January', $original);
	$original = preg_replace('/[Ff]évrier/', 'February', $original);
	$original = preg_replace('/[Mm]ars/', 'March', $original);
	$original = preg_replace('/[Aa]vril/', 'April', $original);
	$original = preg_replace('/[Mm]ai/', 'May', $original);
	$original = preg_replace('/[Jj]uin/', 'June', $original);
	$original = preg_replace('/[Jj]uillet/', 'July', $original);
	$original = preg_replace('/[Aa]oût/', 'August', $original);
	$original = preg_replace('/[Ss]eptembre/', 'September', $original);
	$original = preg_replace('/[Oo]ctobre/', 'October', $original);
	$original = preg_replace('/[Nn]ovembre/', 'November', $original);
	$original = preg_replace('/[Dd]écembre/', 'December', $original);
	date_default_timezone_set("Europe/Paris");
	$time = strtotime($original);
	if (strlen($time) > 0)
	   echo strtotime($original) . "\n";
	else
	{
	    echo "Wrong Format\n";
	    return;
	}
?>