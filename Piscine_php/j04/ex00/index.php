<?php
session_start();
if (isset($_GET['submit']) && $_GET['submit'] === "OK")
{
    $_SESSION['login'] = $_GET['login'];
    $_SESSION['passwd'] = $_GET['passwd'];
}
?>
<html>
    <body>
        <form action="index.php" method="get">
            Identifiant: <input type="text" name="login" value="<?php if(isset($_SESSION['login']))echo $_SESSION["login"];?>"/>
            Mot de passe: <input type="password" name="passwd" value="<?php if(isset($_SESSION['passwd'])) echo $_SESSION["passwd"];?>"/>
            <br>
            <input type="submit" name="submit" value="OK"/>
        </form>
    </body>
</html>