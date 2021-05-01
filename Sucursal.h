#include <iostream> 
#ifndef ORDEN_H
#define ORDEN_H 

#include "Empleado.h"  
#include "Cliente.h"
#include "Inventario.h"

using namespace std;

class Sucursal{
    private:
        Empleado** empleados;
        int idSucursal; 
        int cantidadEmpleados;  
        int cantidadClientes;       
        Inventario* dirInventario; 
        int* cantidades; 
        Cliente** clientes; 
    public:
        int* inventario;
        Sucursal();  
        Sucursal(Empleado**, int, int, Inventario* dir); 
        //Sucursal(Empleado**, Cliente**, int, int, Inventario* dir);  
        Sucursal(int, Empleado**, int, Cliente**, int, Inventario* dir);
        
        void agregarEmpleado(Empleado* empleado); 
        void eliminarEmpleado(Empleado* empleado);   
        
        void agregarCliente(Cliente* cliente, int index);
        void eliminarCliente(Cliente* cliente);
        
        void imprimirEmpleados(); 
        void imprimirClientes();

        void sumarProducto(int index, int cantidad); 
        int getCantidad(int _index);

};
#endif