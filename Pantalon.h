//Daniela Jace Olguín Montiel A01746612 
//Liciel Reyes Ávila A01745016

#ifndef PANTALON_C
#define PANTALON_C

#include <string>
using namespace std;

class Pantalon
{
private:
    float medidaCadera;
    float medidaCintura;
    float medidaMuslo;
    string colorPantalon;
    string broche;
public:

    //Constructor
    Pantalon(){
        medidaCadera = 0;
        medidaCintura = 0;
        medidaMuslo = 0;
        colorPantalon = "";
        broche = "";
    }

    //Constructor
    Pantalon(float cadera,float cintura, float muslo, string color, string br){
        medidaCadera = cadera;
        medidaCintura = cintura;
        medidaMuslo = muslo;
        colorPantalon = color;
        broche = br;

    }

    //Setters y Getters
    float getMedidaCadera(){return medidaCadera;}
    void setMedidaCadera(float cadera){medidaCadera = cadera;}
    
    float getMedidaCintura(){return medidaCintura;}
    void setMedidaCintura(float cintura){medidaCintura = cintura;}

    float getMedidaMuslo(){return medidaMuslo;}
    void setMedidaMuslo(int muslo){medidaMuslo = muslo;}

    string getColorPantalon(){return colorPantalon;}
    void setColorPantalon(string color){colorPantalon = color;}

    string getBroche(){return broche;}
    void setBroche(string br){broche = br;}

    //Funcion que regresa string concatenada para conocer talla de pantalon segun las medidas 
    string conocerTalla()
    {
        string talla {}; 

        if (medidaCadera == 96 &&  medidaMuslo == 58) {talla = "S"; }
        else if (medidaCadera == 100 &&  medidaMuslo == 60) {talla = "M"; }
        else {talla = "G";}

        return "Talla. Su talla en pantalones es " + talla;
    }

    //Funcion para conocer precio del pantalon dependiendo de si tiene botones o cierre. \
    En caso de tener botones, costará $450. De no ser así, su precio será de $350.
    float precioPantalon()
    {
        float precio {};

        if (broche == "botones") {precio = 450; }
        else {precio = 350;}

        return precio;
    }

    //Función que regresa string concatenada con datos del pantalon (color, botones/ cierre, medidas).
    string print()
    {
        return "Pantalon(Color: " + colorPantalon + ", Botones o cierre: " + broche + ", Medidas(Medida de cadera en cm: " + to_string(medidaCadera) + ", Medida de cintura en cm: " + to_string(medidaCintura) + ", Medida de muslo en cm: " + to_string(medidaMuslo) + "))";
    }
};

#endif