<?php

echo "Ingresa un numero: ";
$num = readline();

echo "Tabla de multiplicar del " . $num . ":\n";

for ($i = 1; $i <= 10; $i++) {
    $resultado = $num * $i;
    echo $num . " x " . $i . " = " . $resultado . "\n";
}

?>