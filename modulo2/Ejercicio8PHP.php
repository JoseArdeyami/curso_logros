<?php

echo "Ingresa un numero entero positivo: ";
$num = readline();

if (is_numeric($num) && $num >= 0 && floor($num) == $num) {

    $factorial = 1;
    for ($i = 1; $i <= $num; $i++) {
        $factorial *= $i;
    }

    echo "El factorial de " . $num . " es: " . $factorial;
} else {
    echo "Numero invalido. Ingresa un numero entero positivo.";
}

?>