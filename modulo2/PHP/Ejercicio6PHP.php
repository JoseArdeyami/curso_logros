<?php

echo "Ingresa una cadena de texto: ";
$cadena = readline();

$cadena_minusculas = strtolower($cadena);

$contador_vocales = 0;

for ($i = 0; $i < strlen($cadena_minusculas); $i++) {
    $caracter = $cadena_minusculas[$i];

    if (strpos("aeiou", $caracter) !== false) {
        $contador_vocales++;
    }
}

echo "El numero de vocales en la cadena es: " . $contador_vocales;

?>