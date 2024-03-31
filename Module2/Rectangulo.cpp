#include"Rectangulo.hpp"

void Rectangulo::setBase(int base) {
    this->base = base;
}
int Rectangulo::getBase() const {
    return(this->base);
}
void Rectangulo::setAltura(int altura) {
    this->altura = altura;
}
int Rectangulo::getAltura() const {
    return (this->altura);
}
int Rectangulo::Area(){
    this->area = this->base * this->altura; 
    return (this->area); 
}
void Rectangulo::Redimensionar(const int base, const int altura) {
    this->base = base;
    this->altura = altura;
}
int Rectangulo::MayorArea(const Rectangulo & r) {
    if (this->area < r.area) {
        return (r.area);
    }
    return (this->area);
}