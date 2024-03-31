#include<iostream>
#include"Rectangulo.hpp"

using std::cout;
using std::cin;

int main() {
    int instancias {};
    int base {};
    int altura {};
    int mayor {};

    cout <<"Instacias a trabajar: ";
    cin >> instancias;

    Rectangulo * r = new Rectangulo[instancias];

    cout <<"configuracion de las instancias: " <<std::endl;

    for (int i {}; i < instancias; i++) {
        cout <<"Instancia " <<i+1 <<std::endl;
        cout <<"Ingresar Base: ";
        cin >> base;
        cout <<"Ingresar Altura: ";
        cin >> altura;
    
        r[i].setBase(base);
        r[i].setAltura(altura);
    }

    for (int i {}; i < instancias; i++) {
        std::cout <<std::endl <<"Instacia " <<i + 1 <<std::endl;
        std::cout <<"Base: " <<r[i].getBase() <<std::endl;
        std::cout <<"Altura: " <<r[i].getAltura() <<std::endl;
        std::cout <<"El area del rectangulo es: " <<r[i].Area() <<std::endl;
    }

    for (int i {}; i < instancias - 1; i++) {
        int tmp {};
        tmp = r[i].MayorArea(r[i + 1]);

        if (instancias == 2) {
            break;
        }

        if (tmp > mayor) {
            mayor = tmp;
        }
    }

    cout <<"La instacia mayor cuenta con un Area: " <<mayor <<std::endl;

    return (0);
}