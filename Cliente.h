//Daniela Jace Olguín Montiel A01746612 
//Liciel Reyes Ávila A01745016

#ifndef CLIENTE_C
#define CLIENTE_

#include "Blusa.h"
#include "Pantalon.h"
#include "Devolucion.h" //Archivo de clase creada por Liciel Reyes Ávila (ETAPA INDIVIDUAL)

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

    //Constructor
    Cliente(){
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

    //Destructor
    ~Cliente(){cout << "Destruyendo objeto Cliente\n";}

    //Constructor                
    Cliente(string nombre,string calle,int numero,string colonia, int codigo,int edad){
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

    //Getters
    string getNombreCliente(){return nombreCliente;}
    string getCalleCliente(){return calleCliente;}
    int getNumeroCalle(){return numeroCalle;}
    string getColoniaCliente(){return coloniaCliente;}
    int getCodigoPostal(){return codigoPostalCliente;}
    int getEdad(){return edadCliente;}
    Pantalon getPantalon(){return pantalon;}
    Blusa getBlusa(){return blusa;}
    Devolucion getDevolucion(){return devolucion;}

    //Setters
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

    //Funcion para que el usuario pueda establecer facilmente los valores de la clase Blusa
    void blusaCliente(float medidaPecho, float medidaCintura,float medidaAlto, string colorBlusa,string mangas){
        blusa = Blusa{medidaPecho,medidaCintura,medidaAlto,colorBlusa,mangas};
    }

    //Funcion que regresa string concatenada para saber color de la blusa
    string colorBlusa(){
        string color = blusa.getColorBlusa(); 
        return "El color de la blusa es " + color;
    }

    //Funcion que regresa datos de la blusa (color, con/sin mangas, medidas)
    string datosBlusa(){
        return blusa.print();
    }

    //Funcion para que el usuario pueda establecer facilmente los valores de la clase Pantalon
    void pantalonCliente(float medidaCadera, float medidaCintura,float medidaMuslo, string colorPantalon,string broche){
        pantalon = Pantalon{medidaCadera,medidaCintura,medidaMuslo,colorPantalon,broche};
    }

    //Funcion que regresa string concatenada para saber color del pantalon
    string colorPantalon(){
        string color = pantalon.getColorPantalon();
        return "El color del pantalon es " + color;
    }

    //Funcion que regresa datos del pantalon (color, botones/ cierre, medidas)
    string datosPantalon(){
        return pantalon.print();
    }

    //Funcion para que el usuario pueda establecer facilmente los valores de la clase Devolucion
    void devolucionCliente(string tipoPrenda, string generoPrenda, string estadoPrenda, int metodoDevolucion){
        devolucion = Devolucion{tipoPrenda,generoPrenda,estadoPrenda,metodoDevolucion};
    }

    //Funcion que regresa string concatenada para saber el porcentaje del reembolso al cliente
    string reembolsoCliente(){
        string reemboloso = devolucion.cantidadReembolso();
        return "Al cliente se le devolvera el " + reemboloso + " de lo que pago";
    }

    //Funcion que regresa string concatenada para saber el descuento en pesos mexicanos que se le \
    hará al cliente en su siguiente compra
    string descuentoCliente(){
        int descuento = devolucion.descuentoProximaCompra();
        return "Al cliente se le haran " + to_string(descuento) + " pesos de descuento en su proxima compra";
    }

    //Funcion que regresa string concatenada para saber como devolverá el cliente el producto
    string formaDevolucion(){
        string forma = devolucion.tipoDevolucion();
        return "Metodo de devolucion: " + forma;
    }

    //Funcion que regresa datos de la devolucion (tipo de producto, género del producto, estado \
    del producto, método de devolución)
    string datosDevolucion(){
        return devolucion.print();
    }

    //Funcion que regresa string concatenado para saber el precio a pagar por comprar una blusa y un pantalón
    string precioPagar(){
        float precioBlusa = blusa.precioBlusa();
        float precioPantalon = pantalon.precioPantalon();

        float total = precioBlusa + precioPantalon;

        return "El cliente va a pagar " + to_string(total) + " pesos";
    }

    //Funcion que regresa string concatenado para saber la dirección del cliente
    string printDireccion(){
        return "Direccion de cliente(Calle: " + calleCliente + ", Numero de calle: " + to_string(numeroCalle) + ", Colonia: " + coloniaCliente + ", CP: " + to_string(codigoPostalCliente) + ")";
    }

    //Funcion que regresa string concatenado para datos del cliente (nombre, edad, direccion)
    string printDatos(){
        return "Compra del cliente[Nombre: " + nombreCliente + ", Edad: " + to_string(edadCliente) + ", Direccion(Calle: " + calleCliente + ", Numero de calle: " + to_string(numeroCalle) + ", Colonia: " + coloniaCliente + ", CP: " + to_string(codigoPostalCliente) + ")]"; 
    }
}; 

#endif