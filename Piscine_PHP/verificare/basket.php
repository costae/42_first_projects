
<!DOCTYPE html>
<html>
    <head>
        <style>
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
        #div1{
            margin: 50px auto;
        }
            body
            {
                background-image: url("https://hdimagesnew.com/wp-content/uploads/2015/08/Sea-Beach-Wallpaper-HD-3.jpg");
                background-repeat: no-repeat;
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
        </style>
        <link rel="stylesheet" href="menu.css">
    </head>
    <body>
        <div id="div1">
            <ul class="nivel1 ">
              <li class="menu1">
                Food
                <ul class="nivel2">
                  <li>Pizza</li>
                  <li>Burger</li>
                   <li>Kebab</li>
                </ul>
              </li>
              <li class="menu1">
              	Household items
        			<ul class="nivel2">
                 		 <li>Vacuum cleaners</li>
               		 </ul>
              </li>
              <li class="menu1">Desert
        			<ul class="nivel2">
        				<li>Tartinele</li>
        			</ul>
        			
              </li>
              <li class="menu1">
                  <a href="basket.php">Profile</a>
                  <?php
                  session_start();
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
        <div class="totul">
            <?php
                $arr = array();
                $prc = 0;
                $arr = explode(';', $_SESSION['cart']);
                // print_r($arr);
                $con = mysqli_connect("localhost", "root", "", "data");
                if ($arr && $_SESSION['cart'] !=="")
                {
                    unset($arr[0]);
                    foreach($arr as $k)
                    {
                        $un = mysqli_query($con, "SELECT * FROM post WHERE `title` = '$k';");
                        $doi = mysqli_fetch_array($un);
                        $img = $doi['img_url'];
                        $price = $doi['price'];
                        $title = $doi['title'];
                        echo "<div class='post'>
                            <img src='$img' class='img1'></img>
                            <p class='par'>$title</p>
                            <p>$price</p>
                        </div>";
                        $prc = $prc + $price;
                    }
                    if ($_SESSION['logedin'] == true)
                    {
                        echo "<form action='destroy.php' method='post'><input type='submit' name='submit' value='Submit'/></form>
                            </div>";
                    }
                    else{
                        echo "<h2>To buy this you should be logged</h2><a href= 'index.php'><button>LOGIN</button></a>";
                    }
                }
                else
                    echo "<h2>Your Basket is Empty</h2>
                    <a href='landing.php'><button>Go Back to site and buy something</button></a>";
            ?>
            <?php   
                echo "<tr/><br/> <h3>You have to pay: </h3>".$prc."<br/>";
            ?>
            
        </div>

    </body>
</html>