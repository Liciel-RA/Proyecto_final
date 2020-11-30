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

    Devolucion(){
        tipoPrenda = "";
        generoPrenda = "";
        estadoPrenda = "";
        metodoDevolucion = 0;
    }

    Devolucion(string prenda,string genero, string estado, int metodo){
        tipoPrenda = prenda;
        generoPrenda = genero;
        estadoPrenda = estado;
        metodoDevolucion = metodo;
    }

    string getTipoPrenda(){return tipoPrenda;}
    void setTipoPrenda(string prenda){tipoPrenda = prenda;}
    
    string getGeneroPrenda(){return generoPrenda;}
    void setGeneroPrenda(string genero){generoPrenda = genero;}

    string getEstadoPrenda(){return estadoPrenda;}
    void setEstadoPrenda(string estado){estadoPrenda = estado;}

    int getMetodoDevolucion(){return metodoDevolucion;}
    void setMetodoDevolucion(int metodo){metodoDevolucion = metodo;}

    string cantidadReembolso()
    {
        string reembolso {}; 

        if (estadoPrenda == "usado") {reembolso = "50%" ; }
        else if(estadoPrenda == "nuevo") {reembolso = "100%"; }

        return reembolso;
    }

    int descuentoProximaCompra()
    {
        int descuento {};

        if ( estadoPrenda == "usado") {descuento = 100; }
        else if(estadoPrenda == "nuevo"){descuento = 150;}

        return  descuento;
    }

    string tipoDevolucion()
    {
        string metodo {};
        if (metodoDevolucion = 0){metodo = "Se dejara el paquete en tienda fisica";} 
        else if(metodoDevolucion = 1){metodo = "Se enviara el paquete por paqueteria";}
        return metodo;
    }

    string print()
    {
        return "Devolucion(Tipo de Prenda: " + tipoPrenda + ", Genero de prenda: " + generoPrenda + ", Estado de prenda: " + estadoPrenda + ", Metodo de devolucion: " + to_string(metodoDevolucion) + ")" ;
    }
};

#endif