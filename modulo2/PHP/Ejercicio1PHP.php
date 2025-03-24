<?php
echo "Ingresa el primer numero: ";
$num1 = readline();

echo "Ingresa el segundo numero: ";
$num2 = readline();

echo "Ingresa el tercer numero: ";
$num3 = readline();

if ($num1 <= $num2 && $num1 <= $num3) {
    if ($num2 <= $num3) {
        $ordenados = [$num1, $num2, $num3];
    } else {
        $ordenados = [$num1, $num3, $num2];
    }
} elseif ($num2 <= $num1 && $num2 <= $num3) {
    if ($num1 <= $num3) {
        $ordenados = [$num2, $num1, $num3];
    } else {
        $ordenados = [$num2, $num3, $num1];
    }
} else {
    if ($num1 <= $num2) {
        $ordenados = [$num3, $num1, $num2];
    } else {
        $ordenados = [$num3, $num2, $num1];
    }
}

echo "Numeros ordenados de menor a mayor: " . implode(", ", $ordenados);
?>