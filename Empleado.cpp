#include <iostream> 
#include "Empleado.h" 

Empleado::Empleado()
{
    cargo = "No definido";
    nombre = "No definido";
    direccion = "No definido";
    telefono = 0;
    nacimiento = "No definido";
    nacimiento = "No definido"; 
    id = 0; 
} 

Empleado::Empleado(string _cargo, string _nombre, string _direccion, int _telefono, string _nacimiento, string _sexo, int _id) 
{ 
    cargo = _cargo;  
    nombre = _nombre; 
    direccion = _direccion; 
    telefono = _telefono; 
    nacimiento = _nacimiento;  
    sexo = _sexo; 
    id = _id; 
} 

string Empleado::getNombre(){return nombre;} 
string Empleado::getCargo(){return cargo;} 
int Empleado::getId(){return id;}  

bool Empleado::operator==(Empleado target) 
{ 
    if(target.getNombre()==this->nombre && target.getCargo()==this->cargo && target.getId()==this->id){ 
        return true;
    }else{ 
        return false;
    }
}