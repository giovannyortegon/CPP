#include"hearders.h"
#include "Estudiante.h"
#include "Cursos.h"
#include<vector>

class Matricula: public Estudiante, public Cursos {
    private:
        std::string horario;
    public:
        std::vector<Matricula> registros;
        Matricula();
        Matricula (int _carnet, std::string _nombreEst, std::string _nombreC, std::string _horario);
        // : Estudiante(_carnet, _nombreEst), Cursos(_nombreC);
        void setHorario(std::string _horario);
        std::string getHorario();
        void buscar();
        void editarMatricula();
        void editarEstudiante();
        void eliminar();
        void ingresar();
        void mostrar();
};     