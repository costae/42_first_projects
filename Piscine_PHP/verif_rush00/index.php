
<!--<!DOCTYPE html>-->
<!--<html>-->
<!--<body>-->
<!--<a href="login.html"><button>LOGIN</button></a>-->
<!--</body>-->
<!--</html>-->
<html>
  <head>
    <?php 
session_start();
if ($_SESSION['loggued_on_user'] === "admin")
      header('Location: add.php');
if (isset($_SESSION['logedin']) && $_SESSION['logedin'] === true){
  header('Location: landing.php'); 
   echo '<meta http-equiv="refresh" content="0.1" >';
}
  ?>
    <style>
      #rcorners 
      {
        border-radius: 25px;
        border: 5px solid #297E92;
        padding: 20px; 
        width: 300px;
        height: 400px; 
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
<div align="center" id="rcorners">
    <h4>TO PURCHASE SOMETHING FROM THIS SITE YOU MUST BE LOGGED IN</h4>
    <form method = "POST"  name="login.php" action="login.php">
    <h2>Username:</h2>
    <input type="text" name="login" value="" style="width: 250px; height: 35px;" >
      <br/>
    <h2>Password:</h2>
      <input type="password" name="passwd"  value="" style="width: 250px; height: 35px;">
      <br/>
      <br/>
      <input type="submit" value="OK" name="submit" style="display: block; width: 35%; height: 35%; ">
    </form> 
    <a href="create.html"><button style="width: 170px; height: 35px;"><b>Create your account</b></button></a>
    <br/>
     <br/>
    <a href="landing.php">Go to the site anyway</a>
</div>
<br/>
<br/>
<body>
</html>