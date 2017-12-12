<?php
    $servername = "127.0.0.1";
    $username = "root";
    $password = "";
    $conn = mysqli_connect($servername, $username, $password);
    if (!$conn)
    {
        die("Connection failed: ". mysqli_connect_error());
    }
    if (mysqli_query($conn, "CREATE DATABASE data;"))
    {
        echo "Database succesfully created<br/>";
    }
    else
    {
        echo "Errror creating Database". mysqli_error($conn);
    }
    $conn_db = "data";
    $b = hash("ripemd160", "admin");
    $conn = mysqli_connect($servername, $username, $password, $conn_db);
    if (mysqli_query($conn, "CREATE TABLE users(id int NOT NULL AUTO_INCREMENT, login varchar(60), passwd varchar(255), PRIMARY KEY(ID));"))
    {
        mysqli_query($conn, "INSERT INTO users (`login`, `passwd`) VALUES ('admin','$b') ;");
        echo "Table created successfully<br/>";
    }
    else
    {
        echo "Error creating table: ". mysqli_error($conn);
    }
    
    
    if (mysqli_query($conn, "CREATE TABLE post(id int NOT NULL AUTO_INCREMENT, author BIGINT(20), content LONGTEXT, title TEXT, price int NOT NULL, category TEXT, img_url TEXT, PRIMARY KEY(ID));"))
    {
        echo "Table created successfully<br/>";
    }
    else
    {
        echo "Error creating table: ". mysqli_error($conn);
    }
    mysqli_close($conn);
    header('Location: index.php');
?>