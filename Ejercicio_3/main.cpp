#include <iostream>
#include "Clase_circulo.cpp"

int main() {
    Geometria::Circulo circulo(5);
    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;
    return 0;
}