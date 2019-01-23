#!/usr/bin/php
<?php
	$stdin = fopen("php://stdin", "r");
	while ($stdin && !feof($stdin))
	{
		echo "Entrez un nombre :";
		$input = trim(fgets($stdin));
		if (is_numeric($input))
        {
			if ($input % 2 == 0)
				echo "Le chiffre ". $input . " est Pair\n";
			else
				echo "Le chiffre ". $input ." est Impair\n";
        }
		else
			echo "'". $input ."'" . " n'est pas un chiffre\n";
	}
	fclose ($stdin);
	echo "\n";
?>
