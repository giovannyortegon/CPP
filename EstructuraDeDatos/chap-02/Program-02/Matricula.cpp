#include"hearders.h"
#include"Matricula.h"
#include<vector>

Matricula::Matricula() {};
Matricula::Matricula (int _carnet, std::string _nombreEst, std::string _nombreC, std::string _horario)
:Estudiante(_carnet, _nombreEst), Cursos(_nombreC) {
    this->horario = _horario;
}

void Matricula::setHorario(std::string _horario){
    horario = _horario;
}
std::string Matricula::getHorario(){
    return horario;
}

void Matricula::buscar(){
    system("CLS");
    int carnet;
    std::cout<<"Digite el carnet del estudiante a buscar : ";
    std::cin>>carnet;
    
    int enc=0;
    for (size_t i = 0; i < registros.size(); ++i){
        if (registros[i].getCarnet() == carnet){
            if (enc==0){
                std::cout<<"Nombre del estudiante : " <<registros[i].getNombre()<<std::endl;
                enc=1;
            }
            std::cout<<"Curso matriculado : "<<registros[i].getNombreCurso()<<std::endl;
            std::cout<<"Horario : "<<registros[i].getHorario()<<std::endl;
        }
    }
    if (enc==0)
        std::cout<<"El carnet "<<carnet<<" no fue encontrado!!";
    std::cout<<std::endl;
    system("PAUSE");
}

void Matricula::editarMatricula(){
    system("CLS");
    int carnet;
    char nuevoCurso[30];
    char nuevoHorario[30];
    bool enc=false;
    std::cout<<"Digite el carnet del estudiante a buscar : ";
    std::cin>>carnet;
    std::cin.ignore();
    for (size_t i = 0; i < registros.size(); ++i){
        if (registros[i].getCarnet() == carnet){
            std::cout<<"Datos actuales del estudiante "<<std::endl;
            std::cout<<"Nombre del estudiante : " <<registros[i].getNombre()<<std::endl;
            enc=true; break;
        }
    }
    
    if(enc==false){
        std::cout<<"El carnet "<<carnet<<" no fue encontrado en la lista."<<std::endl;
    }
    
    char resp='N';
    
    if (enc == true){
    for (size_t j = 0; j < registros.size(); ++j){
        if (registros[j].getCarnet() == carnet){
            std::cout<<"Curso matriculado : "<<registros[j].getNombreCurso()<<std::endl;
            std::cout<<"¿Desea modificarlo ? S/N ";
            std::cin>>resp;
            std::cout<<std::endl;
            std::cin.ignore();
        
                if(toupper(resp) =='S'){
                    std::cout<<"Digite el nuevo nombre del curso : ";
                    std::cin.getline(nuevoCurso,30);
                    std::cout<<"Digite el nuevo horario : ";
                    std::cin.getline(nuevoHorario,30);
                    registros[j].setNombreCurso(nuevoCurso);
                    registros[j].setHorario(nuevoHorario);
                }
            }
        }
    }
    std::cout<<std::endl;

    system("PAUSE");
}

void Matricula::editarEstudiante(){
    system("CLS");
    int carnet;
    char nuevoNombre[30];
    bool enc=false;

    std::cout<<"Digite el carnet del estudiante a modificar : ";
    std::cin>>carnet;
    std::cin.ignore();
    for (size_t i = 0; i < registros.size(); ++i){
        if (registros[i].getCarnet() == carnet){
            std::cout<<"Datos actuales del estudiante "<<std::endl;
            std::cout<<"Nombre del estudiante : " <<registros[i].getNombre()<<std::endl;
            std::cout<<"Digite el nuevo nombre del estudiante : ";
            std::cin.getline(nuevoNombre,30);
            enc=true; break;
        }
    }

    if(enc==false){
        std::cout<<"El carnet "<<carnet<<" no fue encontrado en la lista."<<std::endl;
    }

    if (enc == true){
        for (size_t i = 0; i < registros.size(); ++i){
            for (size_t j = 0; j < registros.size(); ++j){
                if (registros[j].getCarnet() == carnet){
                    registros[j].setNombre(nuevoNombre);
                    enc=true;
                }
            }
        }
    }

    std::cout<<std::endl;
    system("PAUSE");
}

void Matricula::eliminar(){
    system("CLS");
    int carnet;
    char resp='N';
    bool enc=false;
    std::cout<<"Digite el carnet del estudiante a eliminar : ";
    std::cin>>carnet;
    for (size_t i = 0; i < registros.size(); i++){
        if (registros[i].getCarnet() == carnet){
            std::cout<<"Datos actuales del estudiante "<<std::endl;
            std::cout<<"Nombre del estudiante : " <<registros[i].getNombre()<<std::endl;
            std::cout<<"¿Desea realmente eliminar este registro S/N?: "<<std::endl;

            std::cin>>resp;
            enc=true; break;
        }
    }

    if(enc==false){
        std::cout<<"El carnet "<<carnet<<" no fue encontrado en la lista."<<std::endl;
    }

    if(toupper(resp) =='S'){
        for (size_t i = 0; i < registros.size(); i++){
                for (size_t j = 0; j < registros.size(); j++){
                    if (registros[j].getCarnet() == carnet){
                        registros.erase(registros.begin()+j);
                    }
                }
        }
    }

    std::cout<<std::endl;
    system("PAUSE");
}

void Matricula::ingresar(){
    system("CLS");
    int carnet;
    char nombreEst[30];
    char nombreCurso[30];
    char horario[15];

    std::cout<<std::endl<<std::endl<<std::endl<<std::endl;
    std::cout<<"\t\t\t\t Ingreso datos de matrícula"<<std::endl<<std::endl;
    std::cout<<"\t\t\t\tDigite el carnet del estudiante : ";
    std::cin>>carnet;
    std::cin.ignore();
    std::cout<<"\t\t\t\tDigite el nombre del estudiante : ";
    std::cin.getline(nombreEst,30);

    for (int i=0;i<2;i++){
        std::cout<<std::endl<<"\t\t\t\tDigite el nombre del curso # " <<i+1<<": ";
        std::cin.getline(nombreCurso,30);
        std::cout<<std::endl<<"\t\t\t\tDigite el horario del curso : ";
        std::cin.getline(horario,15);
        Matricula matri = Matricula(carnet,nombreEst, nombreCurso,horario);
        registros.push_back(matri);
    }
}


void Matricula::mostrar() {
    system("CLS");
    gotoxy(30,5);
    std::cout<<"*** Listado de matrícula *** "<<std::endl;
    gotoxy(30,6);
    std::cout<<"--------------------------------------------------------"<<std::endl;
    gotoxy(30,7);
    std::cout<<"Carnet Nombre Estudiante Nombre Curso Horario"<<std::endl;
    gotoxy(30,8);
    std::cout<<"--------------------------------------------------------"<<std::endl;

    int fila = 9;
    for (size_t i = 0; i < registros.size(); i++){
        gotoxy(30,fila);
        std::cout<<registros[i].getCarnet();
        gotoxy(38,fila);
        std::cout<<registros[i].getNombre();
        gotoxy(60,fila);
        std::cout<<registros[i].getNombreCurso();
        gotoxy(79,fila);
        std::cout<<registros[i].getHorario();
        fila++;
    }

    std::cout<<std::endl<<std::endl;
    system("PAUSE");
}
 