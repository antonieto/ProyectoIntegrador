#include <iostream>
#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
using namespace std;
//
class Cliente{
    private:
        string rfc;
        string nombre;
        string direccion;
        int telefono;
        string nacimiento;
        string sexo; 
        bool existe;
    public:
        Cliente();
        Cliente(string rfc,string nombre,string direccion,int telefono,string nacimiento,string sexo);
        void imprimirInformacionPersonal(); 
        string getNombre(); 
        string getRfc(); 
        bool exists();
};
#endif