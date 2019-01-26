#!/usr/bin/php
<?php
/**
 * Created by PhpStorm.
 * User: jde-mour
 * Date: 2019-01-24
 * Time: 21:08
 */
date_default_timezone_set('Europe/Paris');

$month = array(
    1 => "janvier",
    2 => "fevrier",
    3 => "mars",
    4 => "avril",
    5 => "mai",
    6 => "juin",
    7 => "juillet",
    8 => "aout",
    9 => "septembre",
    10 => "octobre",
    11 => "novembre",
    12 => "decembre");

$weekDay = array(
    1 => "lundi",
    2 => "mardi",
    3 => "mercredi",
    4 => "jeudi",
    5 => "vendredi",
    6 => "samedi",
    7 => "dimanche");

if ($argc < 2)
    exit();

$date = explode(" ", argv[1]);
if (count($date) != 5 ||
    preg_match("/^/"))
?>