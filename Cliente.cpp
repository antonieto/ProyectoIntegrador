#include "Cliente.h"
#include <iostream>
using namespace std;

Cliente::Cliente(){
    rfc = "";
    nombre = "";
    direccion = "";
    telefono = 0;
    nacimiento = "";
    sexo = ""; 
    existe = false;
}

Cliente::Cliente(string _rfc,string _nombre,string _direccion,int _telefono,string _nacimiento,string _sexo){
    rfc = _rfc;
    nombre = _nombre;
    direccion = _direccion;
    telefono = _telefono;
    nacimiento = _nacimiento;
    sexo = _sexo; 
    existe = 1;
}

void Cliente::imprimirInformacionPersonal(){
    cout<<"Nombre: "<<this->nombre<<endl;
    cout<<"RFC: "<<this->rfc<<endl;
    cout<<"Direccion: "<<this->direccion<<endl;
    cout<<"Telefono: "<<this->telefono<<endl;
    cout<<"Nacimiento: "<<this->nacimiento<<endl;
    cout<<"Sexo: "<<this->sexo<<endl;
} 

string Cliente::getNombre() 
{ 
    return nombre;
} 
string Cliente::getRfc(){return rfc;} 

bool Cliente::exists(){return existe;}