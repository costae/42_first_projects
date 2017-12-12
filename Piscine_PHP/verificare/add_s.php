 <?php
    $conn = mysqli_connect("127.0.0.1","root","","data");
    $b = $_POST['title'];
    $p = $_POST['price'];
    $u = $_POST['url'];
    $c = $_POST['category'];
    // print_r($_POST);
    if($b && $p && $u && $c)
        $add = mysqli_query($conn, "INSERT INTO post (`title`, `price`, `img_url`, `category`) VALUES ('$b', $p, '$u', '$c');");
    if ($add)
        header('Location: add.php');
    else
        echo"Error<br/>";
        ?><a href="add.php"><button>TRY AGAIN</button></a>
        <?php
    mysqli_close($conn);
    ?>