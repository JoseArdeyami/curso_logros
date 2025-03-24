#include <iostream>
#include <cmath>
// EJERCICIO 1
int main() {
    int num1;
    std::cout << "Primer numero para sumar" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Segundo numero para sumar" << std::endl;
    std::cin >> num2;
    int suma;
    suma = num1 + num2;
    std::cout << "resultado: " << suma << std::endl;
    return 0;
}
// EJERCICIO 2
int main() {
    int num1;
    std::cout << "Primer numero para restar" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Segundo numero para restar" << std::endl;
    std::cin >> num2;
    int resta;
    resta = num1 - num2;
    std::cout << "resultado: " << resta << std::endl;
    return 0;
}
// EJERCICIO 3
int main() {
    int num1;
    std::cout << "Primer numero para multiplicar" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Segundo numero para multiplicar" << std::endl;
    std::cin >> num2;
    int mult;
    mult = num1 * num2;
    std::cout << "resultado: " << mult << std::endl;
    return 0;
}
// EJERCICIO 4
int main() {
    int num1;
    std::cout << "Ingrese el dividiendo" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Ingrese el divisor (que no sea 0)" << std::endl;
    std::cin >> num2;
    int division;
    division = num1 / num2;
    std::cout << "resultado: " << division << std::endl;
    return 0;
}
// EJERCICIO 5
int main() {
    int num1;
    std::cout << "Ingrese un numero" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Ingrese segundo numero para calcular el residuo" << std::endl;
    std::cin >> num2;
    int residuo;
    residuo = num1 % num2;
    std::cout << "resultado: " << residuo << std::endl;
    return 0;
}
// EJECICIO 6
int main() {
    int num1;
    std::cout << "Ingrese un numero" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Ingrese un segundo numero" << std::endl;
    std::cin >> num2;
    int num3;
    std::cout << "Ingrese un tercer numero" << std::endl;
    std::cin >> num3;
    int promedio;
    promedio = (num1 + num2 + num3)/3;
    std::cout << "el promedio es: " << promedio << std::endl;
    return 0;
}
//EJECICIO 7
int main() {
    int num;
    std::cout << "Ingrese un numero de dos cifras" << std::endl;
    std::cin >> num;
    int decenas, unidad;
    decenas = num / 10;
    unidad = num % 10;
    int numInverso;
    numInverso = unidad * 10 + decenas;
    std::cout << "el numero invertido es: " << numInverso << std::endl;
    return 0;
}
//EJERCICIO 8
int main() {
    int base;
    std::cout << "Ingrese el numero de la base" << std::endl;
    std::cin >> base;
    int altura;
    std::cout << "Ingrese el numero de la altura" << std::endl;
    std::cin >> altura;
    int area;
    area = base * altura;
    std::cout << "el area es: " << area << std::endl;
    return 0;
}
//EJERCICIO 9
int main() {
    int num1;
    std::cout << "Ingrese el numero a comparar" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Ingrese el numero a comparar" << std::endl;
    std::cin >> num2;
    bool resultado;
    resultado = num1 == num2;
    std::cout << "el area es: " << resultado << std::endl;
    return 0;
}
//EJERCICIO 10
int main() {
    int num1;
    std::cout << "Primer numero para sumar" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Segundo numero para sumar" << std::endl;
    std::cin >> num2;
    int suma;
    suma = num1 + num2;
    std::cout << "resultado: " << suma << std::endl;
    return 0;
}
