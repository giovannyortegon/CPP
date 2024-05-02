#include"hearders.h"

class Cursos {
    private:
        std::string nombreCurso;

    public:
        Cursos();
        Cursos(std::string nombreCurso);
        void setNombreCurso(std::string nombreCurso);
        std::string getNombreCurso();
};
