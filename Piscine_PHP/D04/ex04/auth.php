<?php
function auth($login, $passwd)
{
	$b = unserialize(file_get_contents("private/passwd"));
	foreach($b as $k)
	{
		if ($k['login'] == $login)
		{
			if ($k['passwd'] == hash("ripemd160",$passwd))
			{
				return true;
			}
	}
}
	return false;
}
?>