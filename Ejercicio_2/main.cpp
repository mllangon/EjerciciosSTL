#include<iostream>
#include "triangulo.cpp"
#include "pentagono.cpp"
#include "circulo.cpp"
#include "cuadrado.cpp"
#include "rectangulo.cpp"
using namespace std;

int main(){
    cout<<"Area del triangulo: "<<Geometria::calcularAreaTriangulo(5,3)<<endl;
    cout<<"Area del pentagono: "<<Geometria::calcularAreaPentagono(5,3)<<endl;
    cout<<"Area del circulo: "<<Geometria::calcularAreaCirculo(5)<<endl;
    cout<<"Area del cuadrado: "<<Geometria::calcularAreaCuadrado(5)<<endl;
    cout<<"Area del rectangulo: "<<Geometria::calcularAreaRectangulo(5,3)<<endl;
    return 0;
}