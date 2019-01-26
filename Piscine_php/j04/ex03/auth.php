<?php
function auth($login, $passwd)
{
    $array_users = unserialize(file_get_contents("../private/passwd"));
    $password = hash('whirlpool', $passwd);
    foreach ($array_users as &$user)
    {
        if ($user["login"] == $login && $user["passwd"] == $password)
            return TRUE;

    }
    return FALSE;
}
?>