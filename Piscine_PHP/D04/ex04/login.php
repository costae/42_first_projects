<?php
	include("auth.php");
	$l = $_POST['login'];
	$p = hash("ripemd160",$_POST['passwd']);
	session_start();
	// echo $l.$_GET['passwd'];
	if (auth($l,$_POST['passwd']) == true)
	{	$_SESSION["loggued_on_user"] = $l; 
		// echo "OK\n";
		?>
		<script langage="javascript">top.frames['chat'].location = 'chat.php';</script>
		<iframe src="chat.php" height="550px" name="chat" width="100%" scrolling="no">

		</iframe>
		<br>
		<iframe src="speak.php" height="50px" width="100%"></iframe>
		<a href="index.html" action="logout.php"><button>LOGOUT</button></a>
	<?php
	}
	else 
	{
		$_SESSION["loggued_on_user"] = $l;
		echo "ERROR\n";
	}
?>