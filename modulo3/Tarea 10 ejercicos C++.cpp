//EJERCICIO 1
#include <iostream>

int main() {
    double numero;
    double suma = 0;
    double minimo, maximo;
    int contador = 0;

    std::cout << "Ingresa una lista de numeros (ingresa un valor no numerico para finalizar):\n";

    if (std::cin >> numero) { // Leer el primer número
        suma = numero;
        minimo = numero;
        maximo = numero;
        contador = 1;

        while (std::cin >> numero) {
            suma += numero;
            contador++;

            if (numero < minimo) {
                minimo = numero;
            }

            if (numero > maximo) {
                maximo = numero;
            }
        }

        double promedio = suma / contador;

        std::cout << "Mínimo: " << minimo << std::endl;
        std::cout << "Maximo: " << maximo << std::endl;
        std::cout << "Promedio: " << promedio << std::endl;
        std::cout << "Suma: " << suma << std::endl;
    } else {
        std::cout << "No se ingresaron numeros." << std::endl;
    }

    return 0;
}
//EJERCICIO 2
#include <iostream>
#include <cstdlib> 
#include <ctime>  

int main() {

    std::srand(std::time(0));
    int numero_aleatorio = std::rand() % 100 + 1;

    int intento;
    int intentos_restantes = 5;

    std::cout << "Adivina el numero secreto! (entre 1 y 100)\n";

    while (intentos_restantes > 0) {
        std::cout << "Intento " << 6 - intentos_restantes << ": ";
        std::cin >> intento;

        if (intento < numero_aleatorio) {
            std::cout << "El numero secreto es mayor.\n";
        } else if (intento > numero_aleatorio) {
            std::cout << "El numero secreto es menor.\n";
        } else {
            std::cout << "Felicidades! Adivinaste el numero en " << 6 - intentos_restantes << " intentos.\n";
            return 0;
        }

        intentos_restantes--;
    }

    std::cout << "Se acabaron los intentos! El numero secreto era: " << numero_aleatorio << std::endl;

    return 0;
}
//EJERCICIO 3
#include <iostream>

int main() {
    int num;
    long long factorial = 1;

    do {
        std::cout << "Ingresa un numero entero positivo: ";
        std::cin >> num;

        if (num < 0) {
            std::cout << "Numero invalido. Ingresa un numero positivo.\n";
        }
    } while (num < 0);

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    std::cout << "El factorial de " << num << " es: " << factorial << std::endl;

    return 0;
}
//EJERCICIO 4 (ayudado con IA)
#include <iostream>

int main() {
    int num;
    int suma_divisores = 0;

    do {
        std::cout << "Ingresa un numero entero positivo: ";
        std::cin >> num;

        if (num <= 0) {
            std::cout << "Numero inválido. Ingresa un numero positivo.\n";
        }
    } while (num <= 0);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            suma_divisores += i;
        }
    }

    if (suma_divisores == num) {
        std::cout << num << " es un numero perfecto." << std::endl;
    } else {
        std::cout << num << " no es un numero perfecto." << std::endl;
    }

    return 0;
}
//EJERCICIO 5 (Con ayuda de IA)
#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse

std::string decimalABinario(int decimal) {
    std::string binario = "";
    while (decimal > 0) {
        binario += std::to_string(decimal % 2);
        decimal /= 2;
    }
    std::reverse(binario.begin(), binario.end()); 
    return binario;
}

std::string decimalAHexadecimal(int decimal) {
    std::string hexadecimal = "";
    char caracteresHex[] = "0123456789ABCDEF";
    while (decimal > 0) {
        hexadecimal += caracteresHex[decimal % 16];
        decimal /= 16;
    }
    std::reverse(hexadecimal.begin(), hexadecimal.end()); 
    return hexadecimal;
}

int main() {
    int numeroDecimal;
    int opcion;

    std::cout << "Ingresa un número decimal: ";
    std::cin >> numeroDecimal;

    std::cout << "Selecciona la base a convertir:\n";
    std::cout << "1. Binario\n";
    std::cout << "2. Hexadecimal\n";
    std::cout << "Opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1:
            std::cout << "El número " << numeroDecimal << " en binario es: " << decimalABinario(numeroDecimal) << std::endl;
            break;
        case 2:
            std::cout << "El número " << numeroDecimal << " en hexadecimal es: " << decimalAHexadecimal(numeroDecimal) << std::endl;
            break;
        default:
            std::cout << "Opción inválida." << std::endl;
    }

    return 0;
}
//EJERCICIO 6
#include <iostream>

int main() {
    double numeros[100];
    int contador = 0;
    double num;

    std::cout << "Ingresa una lista de numeros (ingresa un valor no numerico para finalizar):\n";

    while (std::cin >> num && contador < 100) {
        numeros[contador] = num;
        contador++;
    }

    if (contador == 0) {
        std::cout << "No se ingresaron numeros." << std::endl;
        return 0;
    }

    double numeros_ascendente[100];
    for (int i = 0; i < contador; i++) {
        numeros_ascendente[i] = numeros[i];
    }

    for (int i = 0; i < contador - 1; i++) {
        for (int j = 0; j < contador - i - 1; j++) {
            if (numeros_ascendente[j] > numeros_ascendente[j + 1]) {
                double temp = numeros_ascendente[j];
                numeros_ascendente[j] = numeros_ascendente[j + 1];
                numeros_ascendente[j + 1] = temp;
            }
        }
    }

    double numeros_descendente[100];
    for (int i = 0; i < contador; i++) {
        numeros_descendente[i] = numeros[i];
    }

    for (int i = 0; i < contador - 1; i++) {
        for (int j = 0; j < contador - i - 1; j++) {
            if (numeros_descendente[j] < numeros_descendente[j + 1]) {
                double temp = numeros_descendente[j];
                numeros_descendente[j] = numeros_descendente[j + 1];
                numeros_descendente[j + 1] = temp;
            }
        }
    }

    std::cout << "\nLista ordenada en orden ascendente:\n";
    for (int i = 0; i < contador; i++) {
        std::cout << numeros_ascendente[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nLista ordenada en orden descendente:\n";
    for (int i = 0; i < contador; i++) {
        std::cout << numeros_descendente[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
//EJERCICIO 7
#include <iostream>

int main() {
    int num;

    std::cout << "Ingresa un numero para ver su tabla de multiplicar: ";
    std::cin >> num;

    std::cout << "Tabla de multiplicar del " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        std::cout << num << " x " << i << " = " << num * i << std::endl;
    }

    return 0;
}
//EJERCICIO 8 (Con ayuda de IA)
#include <iostream>
#include <string>
#include <algorithm> // Para std::reverse y std::transform
#include <cctype> // Para std::tolower

int main() {
    std::string palabra;

    std::cout << "Ingresa una palabra: ";
    std::getline(std::cin, palabra);

    std::string palabra_procesada = palabra;
    std::transform(palabra_procesada.begin(), palabra_procesada.end(), palabra_procesada.begin(), [](unsigned char c){ return std::tolower(c); });
    palabra_procesada.erase(std::remove_if(palabra_procesada.begin(), palabra_procesada.end(), ::isspace), palabra_procesada.end());

    std::string palabra_invertida = palabra_procesada;
    std::reverse(palabra_invertida.begin(), palabra_invertida.end());

    if (palabra_procesada == palabra_invertida) {
        std::cout << palabra << " es un palíndromo." << std::endl;
    } else {
        std::cout << palabra << " no es un palíndromo." << std::endl;
    }

    return 0;
}
//EJERCICIO 9
#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inicio, fin;

    std::cout << "Ingresa el inicio del rango: ";
    std::cin >> inicio;
    std::cout << "Ingresa el fin del rango: ";
    std::cin >> fin;

    std::cout << "Numeros primos en el rango " << inicio << " a " << fin << ":\n";
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
//EJERCICIO 10
#include <iostream>

int main() {
    int tamano;

    std::cout << "Ingresa el tamaño del triangulo: ";
    std::cin >> tamano;

    for (int i = 1; i <= tamano; i++) {
        for (int j = 1; j <= tamano - i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}