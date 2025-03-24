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
