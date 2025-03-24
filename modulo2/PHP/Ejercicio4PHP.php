<?php

echo "Ingresa las calificaciones separadas por espacios: ";
$calificaciones_str = readline();

$calificaciones_arr = explode(" ", $calificaciones_str);

$suma = 0;
$num_calificaciones = count($calificaciones_arr);

foreach ($calificaciones_arr as $calificacion) {
    $suma += floatval($calificacion);
}

if ($num_calificaciones > 0) {
    $promedio = $suma / $num_calificaciones;
    echo "El promedio de las calificaciones es: " . $promedio;
} else {
    echo "No se ingresaron calificaciones.";
}

?>