#include <iostream>
#include "Inventario.h" 
#include "Producto.h"

using namespace std; 

Inventario::Inventario() 
{ 
    productos = new Producto[1]; 
    size = 0; 
} 

Inventario::Inventario(int _size, Producto* _productos) 
{ 
    size = _size; 
    productos = _productos;
}  

void Inventario::restarProducto(int _index, int _cantidad) 
{ 
    
} 
void Inventario::sumarProducto(int _index, int _cantidad)
{ 
    productos[_index].aumentarCantidad(_cantidad);
}

int Inventario::getSize(){return size;}