#include <iostream>
#include "Clase_circulo.cpp"
#include "Clase_dduadrado.cpp"
#include "Clase_triangulo.cpp"


int main() {
    Geometria::Circulo circulo(5);
    Geometria::Cuadrado cuadrado(5);
    Geometria::Triangulo triangulo(5, 3);

    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;

    std::cout << "Area del cuadrado: " << cuadrado.calcularArea() << std::endl;
    std::cout << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;

    std::cout << "Area del triangulo: " << triangulo.calcularArea() << std::endl;
    std::cout << "Perimetro del triangulo (rectangulo): " << triangulo.calcularPerimetro() << std::endl;
    return 0;
}