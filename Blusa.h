//Daniela Jace Olguín Montiel A01746612 
//Liciel Reyes Ávila A01745016

#ifndef BLUSA_C
#define BLUSA_C

#include <string>
using namespace std;

class Blusa
{
private:
    float medidaPecho;
    float medidaCintura;
    float medidaAlto;
    string colorBlusa;
    string mangas;
public:

    //Constructor
    Blusa(){
        medidaPecho = 0;
        medidaCintura = 0;
        medidaAlto = 0;
        colorBlusa = "";
        mangas = "";
    }

    //Constructor
    Blusa(float pecho,float cintura, float alto, string color, string man){
        medidaPecho = pecho;
        medidaCintura = cintura;
        medidaAlto = alto;
        colorBlusa = color;
        mangas = man;

    }
 
    //Getters y Setters
    float getMedidaPecho(){return medidaPecho;}
    void setMedidaPecho(float pecho){medidaPecho = pecho;}
    
    float getMedidaCintura(){return medidaCintura;}
    void setMedidaCintura(float cintura){medidaCintura = cintura;}

    float getMedidaAlto(){return medidaAlto;}
    void setMedidaAlto(float alto){medidaAlto = alto;}

    string getColorBlusa(){return colorBlusa;}
    void setColorBlusa(string color){colorBlusa = color;}

    string getMangas(){return mangas;}
    void setMangas(string man){mangas = man;}

    //Funcion que regresa string concatenada para conocer talla de blusa segun las medidas 
    string conocerTalla()
    {
        string talla {};

        if (medidaCintura == 67 &&  medidaAlto == 64) {talla = "S"; }
        else if (medidaCintura == 68 &&  medidaAlto == 65) {talla = "M"; }
        else if (medidaCintura == 69 && medidaAlto == 66) {talla = "G";}
        else {talla = "ninguna, no hay tallas disponibles";}

        return "Talla. Su talla en blusas es " + talla;
    }

    //Funcion para conocer precio de blusa dependiendo de si tiene mangas o no. \
    En caso de tener mangas, costará $150.50. De no ser así, su precio será de $100.
    float precioBlusa()
    {
        float precio {};

        if (mangas == "si") {precio = 150.50; }
        else {precio = 100;}

        return precio;
    }

    //Función que regresa string concatenada con datos de la blusa (color, con/sin mangas, medidas)
    string print()
    {
        return "Blusa(Color: " + colorBlusa + ", Con mangas: " + mangas + ", Medidas(Medida de pecho en cm: " + to_string(medidaPecho) + ", Medida de cintura en cm: " + to_string(medidaCintura) + ", Medida de alto en cm: " + to_string(medidaAlto) + "))";
    }
};

#endif