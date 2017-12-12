#!/usr/bin/php
<?php
	if($argc != 2)
		return ;
	if (!$line = fgets(STDIN))
		return ;
	if ($argv[1] === "moyenne")
	{
		$sum = 0;
		$nr = 0;
		while($line = fgets(STDIN))
		{
			$arr = explode(';', $line);
			if ($arr[2] !== "moulinette" && is_numeric($arr[1]))
				{
					$sum = $sum + intval($arr[1]);
					$nr++;
				}
		}
		echo $sum / $nr;
	}
	if ($argv[1] === "moyenne_user")
	{
		$sum = 0;
		$p = 0;
		$arr1 = array();
		$ac = array();
		$arr2 = array();

		while ($line = fgets(STDIN))
		{
			$arr = str_getcsv($line, ';');
		if ($arr[1] !== '' && $arr[2] !== "moulinette")
		{
			$arr2[$arr[0]]+= $arr[1];
			$ac[] = $arr[0];
			$arr1[$arr[0]]++;
		}
		}
		sort($ac);
		$ac = array_unique($ac);
		foreach($ac as $a)
		{
			echo $a.":".$arr2[$a]/$arr1[$a]."\n";
		}
	}

	if ($argv[1] === "ecart_moulinette")
	{
		$sum = 0;
		$p = 0;
		$arr1 = array();
		$ac = array();
		$arr2 = array();
		$m = array();
		while ($line = fgets(STDIN))
		{
			$arr = str_getcsv($line, ';');
		if ($arr[1] !== '' && $arr[2] !== "moulinette")
		{
			$arr2[$arr[0]]+= $arr[1];
			$ac[] = $arr[0];
			$arr1[$arr[0]]++;
		}
		else if ($arr[1] !== '')
		{
			$ac[] = $arr[0];
			$m[$arr[0]]=$arr[1];
		}
		}
		sort($ac);
		$ac = array_unique($ac);
		foreach($ac as $a)
		{
			echo $a.":".(($arr2[$a]/$arr1[$a])-$m[$a])."\n";
		}
	}
?>