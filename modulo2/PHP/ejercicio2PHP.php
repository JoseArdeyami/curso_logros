<?php

echo "Ingresa el primer numero: ";
$num1 = readline();

echo "Ingresa el segundo numero: ";
$num2 = readline();

echo "Ingresa la operacion (+, -, *, /): ";
$operacion = readline();

switch ($operacion) {
    case '+':
        $resultado = $num1 + $num2;
        break;
    case '-':
        $resultado = $num1 - $num2;
        break;
    case '*':
        $resultado = $num1 * $num2;
        break;
    case '/':
        if ($num2 != 0) {
            $resultado = $num1 / $num2;
        } else {
            $resultado = "Error, no se puede hacer division por cero.";
        }
        break;
    default:
        $resultado = "Opcion invalida.";
}

echo "Resultado: " . $resultado;

?>