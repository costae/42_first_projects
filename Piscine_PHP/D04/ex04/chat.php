<!DOCTYPE html>
<html>
<body>
<?php
date_default_timezone_set('UTC');
	$b = array();
	$fo = fopen('private/chat', 'r'); 
     $locked = flock($fo, LOCK_SH, $waitIfLocked); 
     
	if (file_exists("private/chat"))
	{
		$b = unserialize(file_get_contents("private/chat"));
		// print_r($b);
	foreach ($b as $k) {
			echo "[".date('H:m:s',$k['time'])."]"." <b>".$k['login']."</b>:".$k['msg']."</br>";
			
             
	}
	flock($fo, LOCK_UN); 
	}
?>
</body>
</html>