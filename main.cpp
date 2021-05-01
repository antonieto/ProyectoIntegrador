#include <iostream>  
#include "Cliente.h" 
#include "Producto.h"
#include "Empleado.h"
#include "Sucursal.h" 
#include  "Inventario.h" 
#include  "Orden.h" 

using namespace std; 

int main(){ 
    //Instancias de clases 

    //Productos  
    Producto pr1("A01640","Carro", 4.99, 7.99, 9, 2000, 40);
    Producto pr2("A01640","Televisor",78.99, 56.99, 9, 45,30);
    Producto pr3("A01640","PC",15.99,23.99,9,20,13);
    Producto pr4("A01640","Laptop",90.99,12.99,9,20,23);
    Producto pr5("A01640","iPhone",81.99,12.99,9,80,11);
    Producto pr6("A01640","Camara",23.99,12.99,9,1,13);
    Producto pr7("A01640","Mouse",23.99,12.99,9,1,33);
    Producto pr8("A01640","Zapato",332.99,12.99,9,1,2); 



    Producto arregloProductos[20]; 

    arregloProductos[0] = pr1;
    arregloProductos[1] = pr2;
    arregloProductos[2] = pr3;
    arregloProductos[3] = pr4;
    arregloProductos[4] = pr5;
    arregloProductos[5] = pr6; 


    //Inventario 
    Inventario inventarioGlobal = Inventario(20, arregloProductos);

    //Empleados 
    Empleado emp1("Gerente","Alejandro", "Independencia 2", 12, "03/20/1996", "masculino", 15); 
    Empleado emp2("Vendedor","Ivan", "Reforma 2", 123, "03/20/1996", "masculino", 16); 
    Empleado emp3("Administrador","Rogelio", "Constitucion 2", 14, "03/20/1996", "masculino", 17); 
    Empleado emp4("Gerente","Lauro", "Alejandria 2", 15, "03/20/1996", "masculino", 18); 
    Empleado emp5("Vendedor","Felipo", "Washington 2", 16, "03/20/1996", "masculino", 19); 
    Empleado emp6("Administrador","Carlos", "Caribe 2", 17, "03/20/1996", "masculino", 20);  

    Empleado* arregloEmpleados1[3] = {&emp1, &emp2, &emp3}; 
    Empleado* arregloEmpleados2[3] = {&emp4, &emp5, &emp6}; 
    
    //Cliente 
    Cliente cliente1("AFFA","Antonio", "Direccion1", 222, "nacimiento2", "masculino");
    Cliente cliente2("FFTE","Andres", "Direccion2", 333, "nacimiento3", "masculino");
    Cliente cliente3("RA0P","Alberto", "Direccion3", 123, "nacimiento4", "masculino");
    Cliente cliente4("LL15","Paulina", "Direccion4", 414, "nacimiento5", "femenino");
    Cliente cliente5("2X90","Estefany", "Direccion5", 246, "nacimiento6", "femenino");
    Cliente cliente6("359F","Juan", "Direccion6", 412, "nacimiento7", "masculino"); 

    Cliente* arregloClientes1[6]; 
    arregloClientes1[0] = &cliente1;
    arregloClientes1[1] = &cliente2;
    arregloClientes1[2] = &cliente3;

    //Sucursal 
    Sucursal sucursal1(3, arregloEmpleados1, 6, arregloClientes1, 20, &inventarioGlobal);

    //Utilizar métodos
    cout << "Informacion producto 2" << endl;
    pr2.imprimirInformacion();
    
    cout << "Empleados sucursal 1" << endl;
    sucursal1.imprimirEmpleados(); 

    //Eliminar empleado 1 de sucursal 1 
    sucursal1.eliminarEmpleado(&emp2); 
    
    sucursal1.imprimirEmpleados();
    //Agregar empleado 4 a sucursal 1 
    sucursal1.agregarEmpleado(&emp4); 
    sucursal1.imprimirEmpleados(); 



    sucursal1.agregarCliente(&cliente4,3);
    sucursal1.agregarCliente(&cliente5,4);
    sucursal1.agregarCliente(&cliente6,5);
    
    cout << "Clientes sucursal 1: " << endl;
    sucursal1.imprimirClientes();

    //Crear orden 
    Producto arregloProductos2[3] = {pr2, pr5, pr4};
    
    Orden orden1(12,3,arregloProductos2,&cliente4,&emp3, &sucursal1, "Tarjeta");
    cout << "(Orden asignada a un administrador)" << endl; 
    
    Orden orden2(12,3,arregloProductos2,&cliente4,&emp5, &sucursal1, "Tarjeta");

    orden2.imprimirOrden(); 
    orden2.infoCliente(); 

    //Sumar producto a sucursal 1 
    cout << "Cantidad producto 0" << endl; 
    
    cout << sucursal1.getCantidad(0) << endl;
    sucursal1.sumarProducto(0,20); 
    cout << "Sumados 20 productos" << endl; 
    cout << sucursal1.getCantidad(0) << endl;

    return 0;
}