#include "Producto.h" 
#include "Cliente.h"
#include "Inventario.h"
#include "Empleado.h"
#include "Sucursal.h"

class Orden
{
private:
    int id; 
    Producto* carro; 
    Cliente* cliente; 
    Empleado* empleado; 
    Sucursal* sucursal;
    string formaPago; 
    int sizeCarro;

public:
    Orden(); 
    Orden(int, int, Producto*, Cliente*, Empleado*, Sucursal*, string); 
    void imprimirOrden(); 
    void infoCliente();

};
