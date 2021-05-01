#include <iostream> 
#ifndef INVENTARIO_H
#define INVENTARIO_H  

#include "Producto.h"

class Inventario 
{ 
    private:  
        Producto* productos;   
        

    public: 
        int size;
        //Constructores
        Inventario(); 
        Inventario(int, Producto*);  
        
        void restarProducto(int index, int cant);  
        //Producto getProductoById(int);  
        int getSize(); 
        void sumarProducto(int index, int cant); 


};

#endif