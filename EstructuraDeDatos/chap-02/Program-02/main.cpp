#include"hearders.h"
#include"Matricula.h"

int main() {
    setlocale(LC_ALL, "");
    int opcion = 0;
    Matricula _matricula;

    do {
        system("CLS");
        std::cout <<"\t\t\t\t\t*** Sistema de Matricula ***" <<std::endl;
        std::cout <<"\t\t\t\t\t-----------------------------------" <<std::endl;
        std::cout <<"\t\t\t\t\t1. Agregar matricula "<<std::endl;
        std::cout <<"\t\t\t\t\t2. Buscar matricula "<<std::endl;
        std::cout <<"\t\t\t\t\t3. Editar estudiante "<<std::endl;
        std::cout <<"\t\t\t\t\t4. Editar matricula "<<std::endl;
        std::cout <<"\t\t\t\t\t5. Eliminar matricula "<<std::endl;
        std::cout <<"\t\t\t\t\t6. Listar matricula "<<std::endl;
        std::cout <<"\t\t\t\t\t7. Salir "<<std::endl <<std::endl;
        std::cout <<"\t\t\t\t\tOpcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1: _matricula.ingresar(); break;
        case 2: _matricula.buscar(); break;
        case 3: _matricula.editarEstudiante(); break;
        case 4: _matricula.editarMatricula(); break;
        case 5: _matricula.eliminar(); break;
        case 6: _matricula.mostrar(); break;
        default:
            break;
        }

    } while (opcion < 7);

    return (0);
}