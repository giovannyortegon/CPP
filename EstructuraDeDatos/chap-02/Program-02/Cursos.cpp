#include"hearders.h"
#include"Cursos.h"

Cursos::Cursos() {}
Cursos::Cursos(std::string nombreCurso) {
    this->nombreCurso = nombreCurso;
}
void Cursos::setNombreCurso(std::string nombreCurso) {
    this->nombreCurso = nombreCurso;
}
std::string Cursos::getNombreCurso() {
    return nombreCurso;
}