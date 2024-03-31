#include <iostream>
#include "Rectangulo.hpp"

int main() {
    int base = 30;
    int altura = 10;

    Rectangulo rectangulo;
    rectangulo.setBase(base);
    rectangulo.setAltura(altura);

    std::cout <<"Base: " <<rectangulo.getBase() <<std::endl;
    std::cout <<"Altura: " <<rectangulo.getAltura() <<std::endl;
    std::cout <<"El area del rectangulo es: " <<rectangulo.Area() <<std::endl;

    rectangulo.Redimensionar(12, 50);

    std::cout <<"Base: " <<rectangulo.getBase() <<std::endl;
    std::cout <<"Altura: " <<rectangulo.getAltura() <<std::endl;
    std::cout <<"El area del rectangulo es: " <<rectangulo.Area() <<std::endl;

    Rectangulo rec2;
    rec2.setBase(27);
    rec2.setAltura(33);

    std::cout <<"Base: " <<rec2.getBase() <<std::endl;
    std::cout <<"Altura: " <<rec2.getAltura() <<std::endl;
    std::cout <<"El area del rectangulo 2 es: " <<rec2.Area() <<std::endl;

    std::cout <<"El mayor area de la instancia es: " <<rectangulo.MayorArea(rec2) <<std::endl;


    return (0);
}