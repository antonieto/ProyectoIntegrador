#include "Orden.h"
#include <iostream> 

using namespace std; 

Orden::Orden() 
{ 
    id = 0; 
    sizeCarro = 0;
    carro = new Producto[1]; 
    cliente = new Cliente; 
    empleado = new Empleado; 

    formaPago = ""; 

} 

Orden::Orden(int _id, int _sizeCarro, Producto* _productos, Cliente* _cliente, Empleado* _empleado, Sucursal* _sucursal, string _formaPago) 
{ 
    empleado = _empleado; 
    if((*_empleado).getCargo() == "vendedor" || (*_empleado).getCargo() == "Vendedor") 
    { 
        id = _id; 
        sizeCarro = _sizeCarro;
        carro = new Producto[_sizeCarro]; 
        cliente = _cliente; 
        formaPago = _formaPago;  
        cout << "Orden creada" << endl;

    }else 
    { 
        cout << "Orden rechazada" << endl; 
        id = 0; 
        sizeCarro = 0;
        carro = new Producto[1]; 
        cliente = new Cliente; 
        formaPago = ""; 
    }
} 

void Orden::imprimirOrden() 
{ 
    cout << "ID: " << id << " , Tamano del carro: " << sizeCarro << " , Cliente: " << (*cliente).getNombre() << " , Empleado: " << (*empleado).getNombre() << " , Forma de pago: " << formaPago << endl;
} 

void Orden::infoCliente(){(*cliente).imprimirInformacionPersonal();}