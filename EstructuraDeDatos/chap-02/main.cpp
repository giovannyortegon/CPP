#include<iostream>
#include"Estudiante.h"

int main() {
    setlocale(LC_ALL, "");
    int opcion = 0;
    Estudiante _estudiante;

    do {
        system("CLS");
        std::cout <<"\t\t\t\t*** Sistemaa de Estudiante ***" <<std::endl;
        std::cout <<"\t\t\t\t------------------------------------" <<std::endl;
        std::cout <<"\t\t\t\t1. Agregar estudiante " <<std::endl;
        std::cout <<"\t\t\t\t2. Buscar estudiante " <<std::endl;
        std::cout <<"\t\t\t\t3. Editar estudiante " <<std::endl;
        std::cout <<"\t\t\t\t4. Eliminar estudiante " <<std::endl;
        std::cout <<"\t\t\t\t5. Listar estudiante " <<std::endl;
        std::cout <<"\t\t\t\t6. Salir " <<std::endl;
        std::cout <<"\t\t\t\tOpcion: " <<std::endl;
        std::cin >> opcion;

        switch (opcion) {
        case 1: _estudiante.ingresar(); break;
        case 2: _estudiante.buscar(); break;
        case 3: _estudiante.editar(); break;
        case 4: _estudiante.eliminar(); break;
        case 5: _estudiante.mostrar(); break;
        
        default:
            break;
        } 

    } while (opcion < 6);

    return (0);
}