#ifndef __PERSONA_H_
#define __PERSONA_H_

#include <iostream>

class Persona {
    private:
        int carnet;
        std::string nombre;
        std::string apellido;

    public:
        Persona();
        Persona(int _carnet, std::string _nombre, std::string _apellido);
        void setCarnet(int _carnet);
        void setNombre(std::string _nombre);
        void setApellido(std::string _apellido);
        int getCarnet();
        std::string getNombre();
        std::string getApellido();
};

#endif //_PERSONA_H_