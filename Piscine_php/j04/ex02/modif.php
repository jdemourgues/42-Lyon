<?php
    if (!file_exists("../private") || !file_exists("../private/passwd") || $_POST["login"] === "" || $_POST["oldpw"] === "" || $_POST["newpw"] === "" || $_POST["submit"] !== "OK") {
        echo "ERROR\n";
        return ;
    }

    $array_users = unserialize(file_get_contents("../private/passwd"));
    $my_login = $_POST["login"];
    $h_oldpw = hash('whirlpool', $_POST["oldpw"]);
    $h_newpw = hash('whirlpool', $_POST["newpw"]);
    foreach ($array_users as &$user)
    {
        if ($user["login"] === $my_login && $user["passwd"] === $h_oldpw && $h_oldpw !== $h_newpw)
        {
            $user["passwd"] = $h_newpw;
            file_put_contents("../private/passwd", serialize($array_users));
            echo "OK\n";
            return ;
        }
    }
    echo "ERROR\n";
    return ;
?>