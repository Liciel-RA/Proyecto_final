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

    Pantalon(){
        medidaCadera = 0;
        medidaCintura = 0;
        medidaMuslo = 0;
        colorPantalon = "";
        broche = "";
    }

    Pantalon(float cadera,float cintura, float muslo, string color, string br){
        medidaCadera = cadera;
        medidaCintura = cintura;
        medidaMuslo = muslo;
        colorPantalon = color;
        broche = br;

    }

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

    string conocerTalla()
    {
        string talla {}; //Variable para almacenar talla pantalon

        if (medidaCadera == 96 &&  medidaMuslo == 58) {talla = "S"; }
        else if (medidaCadera == 100 &&  medidaMuslo == 60) {talla = "M"; }
        else {talla = "G";}

        //Concatenación de strings
        return "Talla. Su talla en pantalones es " + talla;
    }

    float precioPantalon()
    {
        float precio {};

        if (broche == "botones") {precio = 450; }
        else {precio = 350;}

        return precio;
    }


    string print()
    {
        return "Pantalon(Color: " + colorPantalon + ", Botones o cierre: " + broche + ", Medidas(Medida de cadera en cm: " + to_string(medidaCadera) + ", Medida de cintura en cm: " + to_string(medidaCintura) + ", Medida de muslo en cm: " + to_string(medidaMuslo) + "))";
    }
};

#endif