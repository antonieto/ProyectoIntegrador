#include <iostream> 
#ifndef PRODUCTO_H
#define PRODUCTO_H 
using namespace std;

class Producto{
    private:
        string codigo;
        string nombre;
        float precioCompra;
        float precioVenta;
        int cantidadExistente;
        float peso;
        float size; 
        int id;

    public:
        Producto();
        Producto(string , string ,float , float ,int ,float ,float); 
        void imprimirInformacion(); 
        void setId(int); 
        void aumentarCantidad(int); 
        int getCantidad();
};
#endif