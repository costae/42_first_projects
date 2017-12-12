<?php
	
?>
<html>
    <head>
        <style type="text/css">
             #rcorners 
      {
        border-radius: 25px;
        border: 5px solid #297E92;
        padding: 20px; 
        width: 300px;
        height: auto; 
        margin: 100 auto;
        background: #B2D0D7;
      }
      body{
        background-image: url("https://hdimagesnew.com/wp-content/uploads/2015/08/Sea-Beach-Wallpaper-HD-3.jpg");
        background-repeat: no-repeat;
        background-size: 100%;
        position:relative;
      }
        </style>
    </head>
    <body>
    <div id="rcorners" align="center">
<form method = "POST"  action="add_s.php">
    <h2>Product title:</h2>
    <input type="text" name="title" value="" style="width: 250px; height: 35px;" >
      <br/>
    <h2>Price:</h2>
      <input type="text" name="price"  value="" style="width: 250px; height: 35px;">
       <h2>IMG URL</h2>
      <input type="text" name="url"  value="" style="width: 250px; height: 35px;">
      <br/>
      <select name="category">
        <option value="burger">BURGER</option>
        <option value="pizza">PIZZA</option>
        <option value="kebab">KEBAB</option>
        <option value="vacuum">VACUUM CLEANERS</option>
        <option value="sandwich">TARTINELE</option>
      </select>
      <br/>
      <input type="submit" value="OK" name="submit" style="display: block; width: 35%; height: 35%; ">
    </form> 

<a href="logout.php"><button>LOGOUT</button></a>
</div>
</body>
</html>