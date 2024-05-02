#include"hearders.h"

class Estudiante {
    private:
        int carnet;
        std::string nombre;

    public:
        Estudiante();
        Estudiante(int carnet, std::string nombre);
        void setCarnet(int);
        void setNombre(std::string);
        int getCarnet();
        std::string getNombre();
};
