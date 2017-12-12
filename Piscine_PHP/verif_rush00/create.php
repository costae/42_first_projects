<?php
	session_start();
	$con=mysqli_connect("localhost","root","","data");
	if ($_POST['submit'] == 'OK')
	{
		$b = array();

		if (!$_POST['passwd'] || !$_POST['login'])
		{

			$_SESSION['nul'] = true;
			header('Location: create.html');
			return 0;
		}
		if ($con)
		{
			$pst = $_POST['login'];
			$log = mysqli_query($con,"SELECT `login` FROM users WHERE login like '$pst';", MYSQLI_STORE_RESULT);
			$logd = mysqli_fetch_array($log);

				if ($logd['login'] == $pst)
				{
					mysqli_close($con);
					$_SESSION['nul'] = true;
					header('Location: create.html');
				}
				else
				{
				$p = hash("ripemd160", $_POST['passwd']);
				mysqli_query($con,"INSERT  INTO users (`login`, `passwd`) VALUES ('$pst', '$p');") ;
				mysqli_close($con);
				header('Location: index.php');
				}
		}
	}
	else 
	{
		echo "ERROR\n";
		mysqli_close($con);
		header('Location: login.html');
	}

?>