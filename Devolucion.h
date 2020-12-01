//PROGRAMACION INDIVIDUAL DE:
//Liciel Reyes Ávila
//A01745016
#ifndef DEVOLUCION_C
#define DEVOLUCION_C

#include <string>
using namespace std;

class Devolucion
{
private:
    string tipoPrenda;
    string generoPrenda;
    string estadoPrenda;
    int metodoDevolucion;
public:

    //Constructor
    Devolucion(){
        tipoPrenda = "";
        generoPrenda = "";
        estadoPrenda = "";
        metodoDevolucion = 0;
    }

    //Constructor
    Devolucion(string prenda,string genero, string estado, int metodo){
        tipoPrenda = prenda;
        generoPrenda = genero;
        estadoPrenda = estado;
        metodoDevolucion = metodo;
    }

    //Getters y Setters
    string getTipoPrenda(){return tipoPrenda;}
    void setTipoPrenda(string prenda){tipoPrenda = prenda;}
    
    string getGeneroPrenda(){return generoPrenda;}
    void setGeneroPrenda(string genero){generoPrenda = genero;}

    string getEstadoPrenda(){return estadoPrenda;}
    void setEstadoPrenda(string estado){estadoPrenda = estado;}

    int getMetodoDevolucion(){return metodoDevolucion;}
    void setMetodoDevolucion(int metodo){metodoDevolucion = metodo;}

    //Funcion que regresa string con el porcentaje del reembolso al cliente, dependiendo del \
    estado del producto a devolver. Si es usado, se le regresa el 50%. Si es nuevo, se le regresa el 100%
    string cantidadReembolso()
    {
        string reembolso {}; 

        if (estadoPrenda == "usado") {reembolso = "50%" ; }
        else if(estadoPrenda == "nuevo") {reembolso = "100%"; }

        return reembolso;
    }

    //Funcion que regresa un dato entero para saber el descuento en pesos mexicanos que se le \
    hará al cliente en su siguiente compra dependiendo del estado del producto a devolver. \
    Si es usado, será de $100. Si es nuevo, será de 150.
    int descuentoProximaCompra()
    {
        int descuento {};

        if ( estadoPrenda == "usado") {descuento = 100; }
        else if(estadoPrenda == "nuevo"){descuento = 150;}

        return  descuento;
    }

    //Funcion que regresa string de cómo devolverá el cliente el producto
    string tipoDevolucion()
    {
        string metodo {};
        if (metodoDevolucion = 0){metodo = "Se dejara el paquete en tienda fisica";} 
        else if(metodoDevolucion = 1){metodo = "Se enviara el paquete por paqueteria";}
        return metodo;
    }

    //Funcion que regresa datos de la devolucion (tipo de producto, género del producto, estado \
    del producto, método de devolución)
    string print()
    {
        return "Devolucion(Tipo de Prenda: " + tipoPrenda + ", Genero de prenda: " + generoPrenda + ", Estado de prenda: " + estadoPrenda + ", Metodo de devolucion: " + to_string(metodoDevolucion) + ")" ;
    }
};

#endif