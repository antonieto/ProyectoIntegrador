#include <iostream> 

#include "Sucursal.h" 

Sucursal::Sucursal() 
{
    empleados = new Empleado*[1];  
    clientes = new Cliente*[1];
    idSucursal = 0; 
    cantidadEmpleados = 0;  

} 
Sucursal::Sucursal(Empleado** _empleados, int _idSucursal, int _cantidadEmpleados, Inventario* _dirInventario) 
{ 
    empleados = _empleados; 
    clientes = new Cliente*[1];
    idSucursal = _idSucursal; 
    cantidadEmpleados = _cantidadEmpleados;  
    dirInventario = _dirInventario; 
    cantidades = new int[(*dirInventario).size]; 
} 
Sucursal::Sucursal(int _cantidadEmpleados, Empleado** _empleados, int _cantidadClientes, Cliente** _clientes, int _idSucursal, Inventario* _dirInventario) 
{ 
    empleados = _empleados; 
    clientes = _clientes; 
    cantidadClientes = _cantidadClientes;
    idSucursal = _idSucursal; 
    cantidadEmpleados = _cantidadEmpleados;  
    dirInventario = _dirInventario; 
    cantidades = new int[(*dirInventario).size]; 
} 
void Sucursal::imprimirEmpleados() 
{ 
    for(int i = 0; i < cantidadEmpleados; i++) 
    { 
        if(empleados[i]!=0){ 
            Empleado current = *(empleados[i]);
            cout << "ID: " << current.getId() << " Nombre: " << current.getNombre() << " Cargo: " << current.getCargo() << endl;
        }
        
    }
} 

void Sucursal::eliminarEmpleado(Empleado* _empleado)  
{ 
    for(int i = 0; i < cantidadEmpleados ; i++) 
    { 
        
        if(_empleado == empleados[i]){            
            Empleado current =  *(empleados[i]); 
            cout << "Eliminando a: " << current.getNombre() << endl;
            cout << current.getNombre() << " eliminado" << endl;
            empleados[i] = 0;   
            delete &current;
        }
    
    }
} 

void Sucursal::agregarEmpleado(Empleado* _empleado) 
{ 
    bool check;
    for(int i = 0; i < cantidadEmpleados; i++) 
    { 
        if(empleados[i]==0) 
        { 
            check = true;
            empleados[i] = _empleado;
        }       
    } 
    if(check==false)
        { 
            cout << "Sin espacio" << endl;
        }
}
void Sucursal::eliminarCliente(Cliente* _cliente)  
{ 
    for(int i = 0; i < cantidadClientes ; i++) 
    { 
        
        if(_cliente == clientes[i]){            
            Cliente current =  *(clientes[i]); 
            cout << "Eliminando a: " << current.getNombre() << endl;
            cout << current.getNombre() << " eliminado" << endl;
            clientes[i] = 0;   
            delete &current;
        }
    
    }
} 

void Sucursal::agregarCliente(Cliente* _cliente, int _index) 
{ 

    clientes[_index] = _cliente;
} 

void Sucursal::imprimirClientes() 
{ 
    for(int i = 0; i < cantidadClientes; i++) 
    { 
        Cliente current = *clientes[i];
        cout << "RFC: " << current.getRfc() << " Nombre: " << current.getNombre() << endl;       
    }
} 

void Sucursal::sumarProducto(int _index, int _cantidad) 
{ 
    cantidades[_index] = cantidades[_index] + _cantidad; 
    (*dirInventario).sumarProducto(_index, _cantidad);
} 

int Sucursal::getCantidad(int _index)
{  
    return cantidades[_index];
}