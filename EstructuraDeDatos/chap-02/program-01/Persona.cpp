#include"Persona.h"


Persona::Persona() {}
Persona::Persona(int _carnet, std::string _nombre, std::string _apellido)
: carnet(_carnet), nombre(_nombre), apellido(_apellido) {}
void Persona::setCarnet(int _carnet) {
    this->carnet = _carnet;
}
void Persona::setNombre(std::string _nombre) {
    this->nombre = _nombre;
}
void Persona::setApellido(std::string _apellido) {
    this->apellido = _apellido;
}
int Persona::getCarnet() {
    return this->carnet;
}
std::string Persona::getNombre() {
    return this->nombre;
}
std::string Persona::getApellido() {
    return this->apellido;
}
