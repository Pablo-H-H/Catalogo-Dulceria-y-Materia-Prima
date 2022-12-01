#include <iostream>
#include "Product.h"
#include <sstream>

class Fritura : public Product {
    private:
        string sabor;
        string tipo;
        string forma;
        float gramaje;

    public:
        Fritura();
        Fritura(string , string, float, string, string, string, float);
        void getPresentacion();
        void getInfo();

};

Fritura::Fritura(){}


Fritura::Fritura(string _nombre, string _marca, float _precio, string _sabor, string _tipo, string _forma, float _gramaje) : Product(_nombre, _marca, _precio){
    sabor = _sabor;
    tipo = _tipo;
    forma = _forma;
    gramaje = _gramaje;
}

void Fritura::getInfo(){
    getNombre();
}

void Fritura::getPresentacion(){
    getNombre();
    cout << "Sabor: " << sabor << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Forma: " << forma << endl;
    cout << "Gramaje: " << gramaje << endl;
    cout << "" << endl;
}

