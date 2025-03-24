<?php

$num_aleatorio = rand(1, 100);

$intento = null;

$intentos = 0;

while ($intento !== $num_aleatorio) {

    echo "Adivina el número (entre 1 y 100): ";
    $intento = readline();

    $intentos++;

    if (is_numeric($intento) && $intento >= 1 && $intento <= 100 && floor($intento) == $intento) {

        if ($intento < $num_aleatorio) {
            echo "El numero es mayor.\n";
        } elseif ($intento > $num_aleatorio) {
            echo "El numero es menor.\n";
        } else {
            echo "¡Felicidades! Adivinaste el numero en " . $intentos . " intentos.\n";
            break;
        }
    } else {
        echo "Intento invalido. Ingresa un numero entero entre 1 y 100.\n";
    }
}

exit();

?>