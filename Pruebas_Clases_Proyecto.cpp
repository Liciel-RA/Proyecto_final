//Daniela Jace Olguín Montiel A01746612 
//Liciel Reyes Ávila A01745016

#include "Cliente.h"
#include "Blusa.h"
#include "Pantalon.h"
#include "Devolucion.h" //Archivo de clase creada por Liciel Reyes Ávila (ETAPA INDIVIDUAL)
#include "Cancelar.h" //Archivo de clase creada por Daniela Jace Olguín Montiel (ETAPA INDIVIDUAL)

#include <string>
#include <iostream>
using namespace std;

int main()
{
    //PRUEBAS DE CLASE BLUSA
    cout << "* * * Pruebas para clase Blusa * * *" << endl;
    Blusa blusa1{98,68,65,"rosa","si"};
    cout << blusa1.print() << endl;
    cout << blusa1.conocerTalla() << endl;
    cout << "El precio de la blusa en MXN es de: " << blusa1.precioBlusa() << endl;

    cout << "\n";

    Blusa blusa2{92,67,64,"negro","no"};
    cout << blusa2.print() << endl;
    cout << blusa2.conocerTalla() << endl;
    cout << "El precio de la blusa en MXN es de: " << blusa2.precioBlusa() << endl;

    cout << "\n";

    Blusa blusa3{104,69,66,"azul","si"};
    cout << blusa3.print() << endl;
    cout << blusa3.conocerTalla() << endl;
    cout << "El precio de la blusa en MXN es de: " << blusa3.precioBlusa() << endl;

    cout << "\n";
    cout << "\n";

    //PRUEBAS CLASE PANTALON
    cout << "* * * Pruebas para clase Pantalon * * *" << endl;

    Pantalon pantalon1{100,69,60,"blanco","botones"};
    cout << pantalon1.print() << endl;
    cout << pantalon1.conocerTalla() << endl;
    cout << "El precio del pantalon en MXN es de: " << pantalon1.precioPantalon() << endl;

    cout << "\n";

    Pantalon pantalon2{96,65,58,"negro","cierre"};
    cout << pantalon2.print() << endl;
    cout << pantalon2.conocerTalla() << endl;
    cout << "El precio del pantalon en MXN es de: " << pantalon2.precioPantalon() << endl;

    cout << "\n";

    Pantalon pantalon3{104,73,62,"azul","botones"};
    cout << pantalon3.print() << endl;
    cout << pantalon3.conocerTalla() << endl;
    cout << "El precio del pantalon en MXN es de: " << pantalon3.precioPantalon() << endl;

    cout << "\n";
    cout << "\n";

    //PRUEBAS CLASE DEVOLUCION
    cout << "* * * Pruebas para clase Devolucion * * *" << endl;
    Devolucion devolucion1{"Blusa","Femenino","usado",0};
    cout << devolucion1.print() << endl;
    cout << "El reembolso al cliente sera del: " << devolucion1.cantidadReembolso() << endl;
    cout << "El descuento en pesos MXN en la proxima compra del cliente es de: " << to_string(devolucion1.descuentoProximaCompra()) << endl;
    cout << "El tipo de devolucion del producto es: " << devolucion1.tipoDevolucion() << endl;

    cout << "\n";

    Devolucion devolucion2{"Pantalon","Masculino","nuevo",1};
    cout << devolucion2.print() << endl;
    cout << "El reembolso al cliente sera del: " << devolucion2.cantidadReembolso() << endl;
    cout << "El descuento en pesos MXN en la proxima compra del cliente es de: " << to_string(devolucion2.descuentoProximaCompra()) << endl;
    cout << "El tipo de devolucion del producto es: " << devolucion2.tipoDevolucion() << endl;

    cout << "\n";

    Devolucion devolucion3{"Blusa","Unisex","usado",0};
    cout << devolucion3.print() << endl;
    cout << "El reembolso al cliente sera del: " << devolucion3.cantidadReembolso() << endl;
    cout << "El descuento en pesos MXN en la proxima compra del cliente es de: " << to_string(devolucion3.descuentoProximaCompra()) << endl;
    cout << "El tipo de devolucion del producto es: " << devolucion3.tipoDevolucion() << endl;

    cout << "\n";
    cout << "\n";

    //PRUEBAS CLASE CANCELAR  
    cout << "* * * Pruebas para clase Cancelar * * *" << endl;
    Cancelar cancelar1{"Blusa","Femenino","287",0};
    cout << cancelar1.print() << endl;
    cout << "Mensaje :  " << cancelar1.pagoInicial() << endl;
    cout << "Atencion : " << cancelar1.confirmaCancelar() << endl;

    cout << "\n";

    Cancelar cancelar2{"Pantalon","Masculino","2773",1};
    cout << cancelar2.print() << endl;
    cout << "Mensaje : " << cancelar2.pagoInicial() << endl;
    cout << "Atencion : " << cancelar2.confirmaCancelar() << endl;

    cout << "\n";

    Cancelar cancelar3{"Blusa","Unisex","647374",0};
    cout << cancelar3.print() << endl;
    cout << "Mensaje: " << cancelar3.pagoInicial() << endl;
    cout << "Atencion : " << cancelar3.confirmaCancelar() << endl;

    cout << "\n";
    cout << "\n";


    //PRUEBAS DE CLASE CLIENTE
    cout << "* * * Pruebas para clase Cliente * * *" << endl;
    Cliente cliente1{"Maria","Maple",20,"Miel",58963,19};
    cliente1.blusaCliente(92,67,64,"amarillo","si");
    cliente1.pantalonCliente(100,69,60,"negro","cierre");
    cout << cliente1.printDatos() << endl;
    cout << cliente1.printDireccion() << endl;
    cout << "\n";
    cout << cliente1.colorBlusa() << endl;
    cout << cliente1.datosBlusa() << endl;
    cout << cliente1.colorPantalon() << endl;
    cout << cliente1.datosPantalon() << endl;
    cout << cliente1.precioPagar() << endl;
    cout << "\n";
    cliente1.devolucionCliente("Blusa","Unisex","usado",1);
    cout << cliente1.datosDevolucion() << endl;
    cout << cliente1.reembolsoCliente() << endl;
    cout << cliente1.descuentoCliente() << endl;
    cout << cliente1.formaDevolucion() << endl;
    cout << "\n";
    cout << "\n";
    cliente1.cancelacionCliente("Blusa","Unisex","136",1);
    cout << cliente1.datosCancelacionCliente() << endl;
    cout << "Mensaje :  " << cliente1.pagoInicialCliente() << endl;
    cout << "Atencion : " << cliente1.confirmaCancelarCliente() << endl;


    Cliente cliente2{"Harry","Inglaterra",20,"Londres",58453,23};
    cliente2.blusaCliente(98,68,65,"azul","no");
    cliente2.pantalonCliente(104,62,63,"blanco","botones");
    cout << cliente2.printDatos() << endl;
    cout << cliente2.printDireccion() << endl;
    cout << "\n";
    cout << cliente2.colorBlusa() << endl;
    cout << cliente2.datosBlusa() << endl;
    cout << cliente2.colorPantalon() << endl;
    cout << cliente2.datosPantalon() << endl;
    cout << cliente2.precioPagar() << endl;
    cout << "\n";
    cliente2.devolucionCliente("Blusa","Femenino","nuevo",0);
    cout << cliente2.datosDevolucion() << endl;
    cout << cliente2.reembolsoCliente() << endl;
    cout << cliente2.descuentoCliente() << endl;
    cout << cliente2.formaDevolucion() << endl;
    cout << "\n";
    cliente2.cancelacionCliente("Pantalon","Femenino","521",1);
    cout << cliente2.datosCancelacionCliente() << endl;
    cout << "Mensaje :  " << cliente2.pagoInicialCliente() << endl;
    cout << "Atencion : " << cliente2.confirmaCancelarCliente() << endl;

    cout << "\n";

    Cliente cliente3{"Jungkook","Reforma",15,"Revolucion",57233,23};
    cliente3.blusaCliente(104,69,66,"blanco","si");
    cliente3.pantalonCliente(96,65,58,"negro","cierre");
    cout << cliente3.printDatos() << endl;
    cout << cliente3.printDireccion() << endl;
    cout << "\n";
    cout << cliente3.colorBlusa() << endl;
    cout << cliente3.datosBlusa() << endl;
    cout << cliente3.colorPantalon() << endl;
    cout << cliente3.datosPantalon() << endl;
    cout << cliente3.precioPagar() << endl;
    cout << "\n";
    cliente3.devolucionCliente("Pantalon","Masculino","nuevo",1);
    cout << cliente3.datosDevolucion() << endl;
    cout << cliente3.reembolsoCliente() << endl;
    cout << cliente3.descuentoCliente() << endl;
    cout << cliente3.formaDevolucion() << endl;
    cout << "\n";
    cliente3.cancelacionCliente("Blusa","Femenino","287",0);
    cout << cliente3.datosCancelacionCliente() << endl;
    cout << "Mensaje :  " << cliente3.pagoInicialCliente() << endl;
    cout << "Atencion : " << cliente3.confirmaCancelarCliente() << endl;


    return 0;
}