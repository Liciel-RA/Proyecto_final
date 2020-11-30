#ifndef CLIENTE_C
#define CLIENTE_

#include "Blusa.h"
#include "Pantalon.h"
#include "Devolucion.h"

#include <string>
#include <iostream>
using namespace std;

class Cliente
{
private:
    string nombreCliente;
    string calleCliente;
    int numeroCalle;
    string coloniaCliente;
    int codigoPostalCliente;
    int edadCliente;
    Pantalon pantalon; //Objeto de tipo Pantalon
    Blusa blusa; //Objeto de tipo Blusa
    Devolucion devolucion; //Objeto de tipo Devolucion

public:
    Cliente()
    {
        nombreCliente = ""; 
        calleCliente = "";
        numeroCalle = 0;
        coloniaCliente = "";
        codigoPostalCliente = 0; 
        edadCliente = 0;
        pantalon = Pantalon{}; 
        blusa = Blusa{}; 
        devolucion = Devolucion{};
    }

    ~Cliente(){cout << "Destruyendo objeto Cliente\n";}
                  
    Cliente(string nombre,string calle,int numero,string colonia, int codigo,int edad)
    {
        nombreCliente = nombre; 
        calleCliente = calle;
        numeroCalle = numero;
        coloniaCliente = colonia;
        codigoPostalCliente = codigo; 
        edadCliente = edad;
        pantalon = {}; 
        blusa = {};
        devolucion = {};
    }

    //GETTERS
    string getNombreCliente(){return nombreCliente;}
    string getCalleCliente(){return calleCliente;}
    int getNumeroCalle(){return numeroCalle;}
    string getColoniaCliente(){return coloniaCliente;}
    int getCodigoPostal(){return codigoPostalCliente;}
    int getEdad(){return edadCliente;}
    Pantalon getPantalon(){return pantalon;}
    Blusa getBlusa(){return blusa;}
    Devolucion getDevolucion(){return devolucion;}

    //SETTERS
    void setNombreCliente(string nombre){nombreCliente = nombre;}
    void setCalleCliente(string calle){calleCliente = calle;}
    void setNumeroCalle(int numero){numeroCalle = numero;}
    void setColoniaCliente(string colonia){coloniaCliente = colonia;}
    void setCodigoPostal(int codigo){codigoPostalCliente = codigo;}
    void setEdad(int edad){edadCliente = edad;}
    void setPantalon(Pantalon pant){pantalon = pant;}
    void setBlusa(Blusa blu){blusa = blu;}
    void setDevolucion(Devolucion dev){devolucion = dev;}


    //MÉTODOS

    void blusaCliente(float medidaPecho, float medidaCintura,float medidaAlto, string colorBlusa,string mangas){
        blusa = Blusa{medidaPecho,medidaCintura,medidaAlto,colorBlusa,mangas};
    }

    string colorBlusa(){
        string color = blusa.getColorBlusa(); //Obtiene el color de la blusa mediante el método \
        "getColorBlusa" de la clase "Blusas" 
        return "El color de la blusa es " + color;
    }

    string datosBlusa(){
        return blusa.print();
    }

    void pantalonCliente(float medidaCadera, float medidaCintura,float medidaMuslo, string colorPantalon,string broche){
        pantalon = Pantalon{medidaCadera,medidaCintura,medidaMuslo,colorPantalon,broche};
    }

    string colorPantalon(){
        string color = pantalon.getColorPantalon(); //Obtiene el color del pantalon mediante el método \
        "getColorPantalon" de la clase "Pantalones" 
        return "El color del pantalon es " + color;
    }

    string datosPantalon(){
        return pantalon.print();
    }

    void devolucionCliente(string tipoPrenda, string generoPrenda, string estadoPrenda, int metodoDevolucion){
        devolucion = Devolucion{tipoPrenda,generoPrenda,estadoPrenda,metodoDevolucion};
    }

    string reembolsoCliente(){
        string reemboloso = devolucion.cantidadReembolso();
        return "Al cliente se le devolvera el " + reemboloso + " de lo que pago";
    }

    string descuentoCliente(){
        int descuento = devolucion.descuentoProximaCompra();
        return "Al cliente se le haran " + to_string(descuento) + " pesos de descuento en su proxima compra";
    }

    string formaDevolucion(){
        string forma = devolucion.tipoDevolucion();
        return "Metodo de devolucion: " + forma;
    }

    string datosDevolucion(){
        return devolucion.print();
    }


    string precioPagar(){
        float precioBlusa = blusa.precioBlusa();
        float precioPantalon = pantalon.precioPantalon();

        float total = precioBlusa + precioPantalon;

        return "El cliente va a pagar " + to_string(total) + " pesos";
    }

    string printDireccion(){
        return "Direccion de cliente(Calle: " + calleCliente + ", Numero de calle: " + to_string(numeroCalle) + ", Colonia: " + coloniaCliente + ", CP: " + to_string(codigoPostalCliente) + ")";
    }



    string printDatos(){
        //Concatenación Lámpara(color,costo, Foco(luminosidad,color)), Apagador. Se encuentra ___)
        return "Compra del cliente[Nombre: " + nombreCliente + ", Edad: " + to_string(edadCliente) + ", Direccion(Calle: " + calleCliente + ", Numero de calle: " + to_string(numeroCalle) + ", Colonia: " + coloniaCliente + ", CP: " + to_string(codigoPostalCliente) + ")]"; 
    }
}; //Clase Cliente

#endif