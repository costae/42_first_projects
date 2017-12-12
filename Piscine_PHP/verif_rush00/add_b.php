<?php
    session_start();
    $_SESSION['cart'] .= ";" . $_POST['cacasca'];
    $g = $_GET['query'];
    header("Location: landing.php");
?>