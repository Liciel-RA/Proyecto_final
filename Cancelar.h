//PROGRAMACION INDIVIDUAL DE:
//Daniela Jace Olguín Montiel
//A01746612
#ifndef CANCELAR_C
#define CANCELAR_C

#include <string>
using namespace std;

class Cancelar
{
private:
    string tipoPrenda;
    string generoPrenda;
    string numeroCliente;
    int metodoCliente;
public:

    //Constructor
    Cancelar(){
        tipoPrenda = "";
        generoPrenda = "";
        numeroCliente = "";
        metodoCliente = 0;
    }

    //Constructor
    Cancelar(string prenda, string genero, string numero, int cancelar){
        tipoPrenda = prenda;
        generoPrenda = genero;
        numeroCliente = numero;
        metodoCliente = cancelar;
    }

    //Getters y Setters
    string getTipoPrenda(){return tipoPrenda;}
    void setTipoPrenda(string prenda){tipoPrenda = prenda;}
    
    string getGeneroPrenda(){return generoPrenda;}
    void setGeneroPrenda(string genero){generoPrenda = genero;}

    string getNumeroCliente(){return numeroCliente;}
    void setNumeroCliente(string numero){numeroCliente = numero;}

    int getMetodoCliente(){return metodoCliente;}
    void setMetodoCliente(int cancelar){metodoCliente = cancelar;}

    //Funcion que regresa string del pago inicial sera rembolsado. 
    string pagoInicial()
    {
        string pago {}; 

        pago = "Tu pago te sera rembolsado debido a que has cancelado tu pedido, gracias." ;


        return pago;
    }

    //Funcion que regresa un string de que la cancelación fue exitosa.
    string confirmaCancelar()
    {
        string resultado {};

        resultado = "Tu cancelacion ha sido exitosa, podemos tardarnos 1 semana para rembolsar, te sera depositado a tu cuenta, gracias" ;
        return  resultado;
    }

    //Funcion que regresa datos de cancelar (tipo de producto, género del producto, estado \
    del producto, tipo de cancelación)
    string print()
    {
        return "Cancelacion(Tipo de Prenda: " + tipoPrenda + ", Genero de prenda: " + generoPrenda + ", Numero de cliente: " + numeroCliente+ ", Metodo de cancelacion: " + to_string(metodoCliente) + ")" ;
    }
};

#endif