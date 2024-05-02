#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include"Persona.h"
#include <cerrno>
#include <vector>

class Estudiante : public Persona {
    private:
        std::string carrera;

    public:
        std::vector<Estudiante> lista;
        Estudiante();
        Estudiante(int _carnet, std::string _nombre, std::string _apellido, std::string carrera);
        std::string getCarrera();
        void setCarrera(std::string _carrera);
        void buscar();
        void editar();
        void eliminar();
        void ingresar();
        void mostrar();
};

#endif  // __ESTUDIANTE_H__
