<?php

echo "Ingresa la temperatura en grados Celsius: ";
$celsius = readline();

$fahrenheit = ($celsius * 9 / 5) + 32;

echo $celsius . " grados Celsius equivalen a " . $fahrenheit . " grados Fahrenheit.";

?>