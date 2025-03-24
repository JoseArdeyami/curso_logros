<?php

echo "Ingresa tu edad: ";
$edad = readline();

if (is_numeric($edad) && $edad >= 0 && floor($edad) == $edad) {

    if ($edad >= 18) {
        echo "Eres mayor de edad.";
    } else {
        echo "Eres menor de edad.";
    }
} else {
    echo "Edad invalida. Ingresa un numero entero positivo.";
}

?>