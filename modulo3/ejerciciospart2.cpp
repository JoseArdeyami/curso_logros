#include <iostream>
#include <cmath>
// EJERCICIO 1
int main() {
    int num1;
    std::cout << "Ingrese un numero" << std::endl;
    std::cin >> num1;
    int num2;
    std::cout << "Ingrese un segundo numero" << std::endl;
    std::cin >> num2;
    if (num1 > num2) {
        std::cout << "Numero 1 tiene que ser menor a numero 2" << std::endl;
        return 1;
    }
    std::cout << "Numeros pares en el rango: " << num1 << " a " << num2 << std::endl;
    for (int i = num1; i <= num2; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
//EJERCICIO 2
int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingresa una serie de numeros (ingresa un numero negativo para finalizar):\n";

    while (true) {
        std::cout << "Ingresa un numero: ";
        std::cin >> numero;

        if (numero < 0) {
            break;
        }

        suma += numero;
    }

    std::cout << "La suma de los numeros positivos ingresados es: " << suma << std::endl;

    return 0;
}
//EJERCICIO 3
int main() {
    int numeros[5];
    int mayor;

    std::cout << "Ingresa cinco numeros:\n";

    for (int i = 0; i < 5; i++) {
        std::cout << "Numero " << i + 1 << ": ";
        std::cin >> numeros[i];

        if (i == 0) {
            mayor = numeros[i];
        } else if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
    }

    std::cout << "El numero mayor es: " << mayor << std::endl;

    return 0;
}
//EJERCICIO 4
int main() {
    int numero;

    std::cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    std::cin >> numero;

    std::cout << "Tabla de multiplicar del " << numero << ":\n";

    for (int i = 1; i <= 10; i++) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
    }

    return 0;
}
//EJERCICIO 5
#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string cadena;
    int contador_vocales = 0;

    std::cout << "Ingresa una cadena de texto: ";
    std::getline(std::cin, cadena);

    for (char caracter : cadena) {
        char caracter_minuscula = std::tolower(caracter);

        if (caracter_minuscula == 'a' || caracter_minuscula == 'e' || caracter_minuscula == 'i' || caracter_minuscula == 'o' || caracter_minuscula == 'u') {
            contador_vocales++;
        }
    }

    std::cout << "La cadena ingresada contiene " << contador_vocales << " vocales." << std::endl;

    return 0;
}
//EJERCICIO 6
int main() {
    int num;
    long long factorial = 1;

    std::cout << "Ingresa un numero entero positivo: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "El factorial no esta definido para numeros negativos." << std::endl;
    } else {
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        std::cout << "El factorial de " << num << " es: " << factorial << std::endl;
    }

    return 0;
}
