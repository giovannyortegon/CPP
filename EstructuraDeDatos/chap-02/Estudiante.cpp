#include"Estudiante.h"

Estudiante::Estudiante() {}
Estudiante::Estudiante(int _carnet, std::string _nombre, std::string _apellido, std::string _carrera)
:Persona(_carnet, _nombre, _apellido), carrera (_carrera) {}
std::string  Estudiante::getCarrera() {
    return this->carrera;
}
void Estudiante::setCarrera(std::string _carrera) {
    this->carrera = _carrera;
}
void Estudiante::buscar() {
    system("cls");
    int carnet;
    std::cout <<"Digite el carnet de estudiante a buscar: ";
    std::cin >> carnet;

    for (size_t i = 0; i < lista.size(); ++i) {
        if (lista[i].getCarnet() ==  carnet) {
            std::cout <<"Nombre de estuadiante: " << lista[i].getNombre() <<" " <<lista[i].getApellido() <<std::endl;
            std::cout <<"Carrera que cursa: " <<lista[i].getCarrera();
        }
    }
    std::cout <<std::endl;
    system("PAUSE");
}
void Estudiante::editar() {
    int carnet;
    char nuevoNombre[30];
    char nuevoApellido[40];
    char nuevaCarrera[30];
    bool enc = false;

    std::cout <<"Digite el carnet a modificar: " ;
    std::cin >> carnet;
    std::cin.ignore();

    for (size_t i = 0; i < lista.size(); ++i) {
        if (lista[i].getCarnet() == carnet) {
            std::cout <<"Datos  actuales del estudiante " <<std::endl;
            std::cout <<"Nombre del estudiante: " <<lista[i].getNombre() <<" " <<lista[i].getApellido() <<std::endl;
            std::cout <<"Carrera que cursa: " <<lista[i].getCarrera() <<std::endl;

            std::cout <<"Digite el nuevo nombre del estudiante: ";
            std::cin.getline(nuevoNombre, 30);

            std::cout <<"Digite los nuevos apellidos del estudiante: ";
            std::cin.getline(nuevoApellido, 40);

            std::cout <<"Digite el nombre de la nueva carrera del estudiante: ";
            std::cin.getline(nuevaCarrera, 30);

            lista[i].setNombre(nuevoNombre);
            lista[i].setApellido(nuevoApellido);
            lista[i].setCarrera(nuevaCarrera);
            enc = true;
        }
    }
    if (enc == false) {
        std::cout <<"El carnet " <<carnet <<" no fue encontrado en la lista. " <<std::endl;
    }
    std::cout <<std::endl;
    system("PAUSE");

}
void Estudiante::eliminar() {
    system("CLS");
    int carnet;
    char resp='N';
    bool enc = false;

    std::cout <<"Digite el carnet del estudiante a eliminar: ";
    std::cin >> carnet;

    for (size_t i = 0; i < lista.size(); ++i) {
        if (lista[i].getCarnet() == carnet) {
            std::cout <<"Datos actuales del estudiante " <<std::endl;
            std::cout <<"Nombre del estudiante: "
            <<lista[i].getNombre() << " " <<lista[i].getApellido() <<std::endl;
            std::cout <<"Carrera que cursa: " <<lista[i].getCarrera() <<std::endl;
            std::cout <<"Desea realmente eliminar este registro S/N?: " <<std::endl;
            std::cin >>resp;
            if (toupper(resp) == 'S') {
                lista.erase(lista.begin() + i);
            }
            enc = true;
        }
    }
    if (enc == false) {
        std::cout <<"El carnet " <<carnet <<" no fue encontrado en la lista. " <<std::endl;
    }
    std::cout << std::endl;
    system("PAUSE");
}
void Estudiante::ingresar() {
    system("CLS");
    int carnet;
    char nombre[30];
    char apellidos[40];
    char carrera[30];

    std::cout <<std::endl <<std::endl <<std::endl;
    std::cout <<"\t\t\t\tIngreso datos de estudiantes: " <<std::endl <<std::endl;
    std::cout <<"\t\t\t\tDigite el carnet del estudiante: ";
    std::cin >> carnet;
    std::cin.ignore();
    std::cout <<"\t\t\t\tDigite el nombre del estudiante: ";
    std::cin.getline(nombre, 30);
    std::cout <<"\t\t\t\tDigite el apellido del estudiante: ";
    std::cin.getline(apellidos, 40);
    std::cout <<"\t\t\t\tDigite el nombre de la carrera del estudiante: ";
    std::cin.getline(carrera, 30);

    Estudiante est = Estudiante(carnet, nombre, apellidos, carrera);
    lista.push_back(est);
}
void Estudiante::mostrar() {
    system("CLS");
    std::cout <<"***          Lista de Estudiante          ***" <<std::endl;
    std::cout <<"---------------------------------------------" <<std::endl;
    std::cout <<"Carnet     Nombre completo     Carrera" <<std::endl;
    std::cout <<"---------------------------------------------" <<std::endl;

    for (size_t i = 0; i < lista.size(); ++i) {
        std::cout <<lista[i].getCarnet() <<"\t";
        std::cout <<lista[i].getNombre() <<" " <<lista[i].getApellido() <<"\t";
        std::cout <<lista[i].getCarrera() <<std::endl;
    }

    std::cout <<std::endl;
    system("PAUSE");
}
