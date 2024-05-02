#include"hearders.h"
#include"Estudiante.h"

Estudiante::Estudiante() {}
Estudiante::Estudiante(int carnet, std::string nombre) {
    this->carnet = carnet;
    this->nombre = nombre;
}
void Estudiante::setCarnet(int carnet) {
    this->carnet = carnet;
}
void Estudiante::setNombre(std::string nombre) {
    this->nombre = nombre;
}
int Estudiante::getCarnet() {
    return this->carnet;
}
std::string Estudiante::getNombre() {
    return nombre;
}
