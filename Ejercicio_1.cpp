#include <iostream>
#include <cmath>

namespace Matematicas {

    double suma(int a, int b) {
        return a + b;
    }

    double resta(int a, int b) {
        return a - b;
    }

    double multiplicacion(int a, int b) {
        return a * b;
    }

    double division(int a, int b) {
        if (b == 0) {
            std::cerr << "Error: División por cero." << std::endl;
            return 0;
        }
        return a / b;
    }

    double cuadrado(int a) {
        return a * a;
    }

    double raiz(int a) {
        if (a < 0) {
            std::cerr << "Error: Raíz cuadrada de un número negativo." << std::endl;
            return -1;
        }
        return sqrt(a);
    }
}

int main() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
    std::cout << "Multiplicación: " << Matematicas::multiplicacion(5, 3) << std::endl;
    std::cout << "División: " << Matematicas::division(5, 3) << std::endl;
    std::cout << "Cuadrado: " << Matematicas::cuadrado(5) << std::endl;
    std::cout << "Raíz: " << Matematicas::raiz(5) << std::endl;
    return 0;
}