<?php
    if (!$_POST["login"] === "" || $_POST["passwd"] === "" || $_POST["submit"] !== "OK") {
        echo "ERROR\n";
        return ;
    }

    if (!file_exists("../private") || !file_exists("../private/passwd"))
            mkdir ("../private");

    if (file_exists("../private/passwd")) {
        $array_user = unserialize(file_get_contents("../private/passwd"));
        foreach ($array_user as $user) {
            if ($user["login"] === $_POST["login"]) {
                echo "ERROR\n";
                return;
            }
        }
    }

    $my_user["login"] = $_POST["login"];
    $my_user["passwd"] = hash('whirlpool', $_POST["passwd"]);
    $array_user[] = $my_user;
    file_put_contents("../private/passwd", serialize($array_user));
    echo "OK\n";
?>
