#include <iostream>
#include "Producto.h"
using namespace std;

Producto:: Producto(){
    codigo="";
    nombre="";
    precioCompra=0.0;
    precioVenta=0.0;
    cantidadExistente=0;
    peso=0.0; 
    id = 0;
}

Producto:: Producto(string _codigo, string _nombre,float _precioCompra, float _precioVenta, int _cantidadExistente, float _peso, float _size){
    codigo = _codigo;
    nombre = _nombre;
    precioCompra = _precioCompra;
    precioVenta = _precioVenta;
    cantidadExistente = _cantidadExistente;
    peso = _peso;
} 

void Producto::imprimirInformacion() 
{ 
    cout << codigo << endl;  
    cout << nombre << endl;  
    cout << precioCompra << endl;  
    cout << precioVenta << endl;  
    cout << cantidadExistente << endl;  
    cout << codigo << endl;  
    cout << peso << endl;  
    cout << id << endl;  
} 

void Producto::aumentarCantidad(int _cantidad) 
{ 
    cantidadExistente = cantidadExistente + _cantidad;
} 

int Producto::getCantidad(){return cantidadExistente;}