
<!DOCTYPE html>
<html>
    <head>
        <style>
        #div1{
            margin: 50px auto;
        }
            body
            {
                background-image: url("http://www.magic4walls.com/wp-content/uploads/2014/01/texture-line-blue-blue-markings.jpg");
                background-size: 100%;
            }
            a{
                color: white;
            }
            a:link{
                text-decoration: none;
            }
            .totul
            {
                border-radius: 20px;
                border: 2px solid #297E92;
                padding: 20px; 
                width: 1230px;
                height: auto; 
                margin: 50px auto;
                background: #B2D0D7;
            }
            .post
            {
                border-radius: 10px;
                border: 1px solid #000000;
                padding: 20px; 
                width: 250px;
                height: 200px; 
                margin: 5px 6px;
                background: #ACCCE6;
                display: inline-block;
            }
            .img1
            {
                padding: 0;
                width: 40%;
                margin: 0;
            }
            .par
            {
                color: #234866;
                font-family:courier;
            }
        </style>
        <link rel="stylesheet" href="menu.css">
    </head>
    <body>
        <div id="div1">
            <ul class="nivel1 ">
              <li class="menu1">
                <a href="?query=">Food</a>
                <ul class="nivel2">
                  <li><a href="?query=pizza">Pizza</a></li>
                  <li><a href="?query=burger">Burger</a></li>
                   <li><a href="?query=kebab">Kebab</a></li>
                </ul>
              </li>
              <li class="menu1">
              	<a href="?query=">Household items</a>
        			<ul class="nivel2">
                 		 <li><a href="?query=vacuum">Vacuum cleaners</li>
               		 </ul>
              </li>
              <li class="menu1"><a href="?query=">Desert</a>
        			<ul class="nivel2">
        				<li><a href="?query=sandwich">Tartinele</a></li>
        			</ul>
        			
              </li>
              <li class="menu1">
                  <a href="basket.php">Profile</a>
                  <?php
                  session_start();
                  if ($_SESSION['loggued_on_user'] === "admin")
            		{
            			header('Location: add.php');
            		}
                  if (isset($_SESSION['logedin']) && $_SESSION['logedin'] === true)
                  echo '<ul class="nivel2" >
        				<li><a href="logout.php">LOGOUT</a></li>
        			</ul>'; 
        			if (!$_SESSION['logedin'])
        			{
        			    echo "<ul class='nivel2' >
        				<li><a href='index.php'>LOGIN</a></li>
        			</ul>";
        			    }
        			?>
                  </li>
            </ul>
        </div>
        <br/>
        <div class="totul">
            <?php
             $con = mysqli_connect("localhost", "root", "", "data");
                $check = $_GET['query'];
                if ($check)
                {
                    $un = mysqli_query($con, "SELECT * FROM post WHERE `category` = '$check';");
                    while($doi = mysqli_fetch_assoc($un))
                    {
                        $img = $doi['img_url'];
                        $price = $doi['price'];
                        $title = $doi['title'];
                        echo "<div class='post'>
                            <img src='$img' class='img1'></img>
                            <p class='par'>$title</p>
                            <p>$price</p>
                           <form action='add_b.php' method='post'><input type='text' name='cacasca' value='$title' readonly/><input type='submit' name='submit' value='Adauga in cos'/></form>
                        </div>";
                    }
                }
                else {
                    $un = mysqli_query($con, "SELECT * FROM post ;");
                    while($doi = mysqli_fetch_assoc($un))
                    {
                        $img = $doi['img_url'];
                        $price = $doi['price'];
                        $title = $doi['title'];
                        echo "<div class='post'>
                            <img src='$img' class='img1'></img>
                            <p class='par'>$title</p>
                            <p>$price</p>
                            <form action='add_b.php' method='post'><input type='text' name='cacasca' value='$title' readonly/><input type='submit' name='submit' value='Adauga in cos'/></form>
                        </div>";
                    }
                }
                 mysqli_close($con);   
            ?>         
        </div>
    </body>
</html>