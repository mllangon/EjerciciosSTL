#include <iostream>
#include <cmath>

namespace Matematicas{

    double suma(int a, int b){
        return a + b;
    }

    double resta(int a, int b){
        return a - b;
    }

    double multiplicacion(int a, int b){
        return a * b;
    }

    double division(int a, int b){
        if (b == 0) {
            std::cerr << "Error: División por cero." << std::endl;
            return 0;
        }
        return a / b;
    }
}