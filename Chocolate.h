#include <iostream>
#ifndef CHOCOLATE
#define CHOCOLATE
#include "Product.h"
#include <sstream>
#include <string>

class Chocolate : public Product {
    private:
        string presentacion;
        float cacaho;
        float gramaje;
    public:
        Chocolate();
        Chocolate(string, string, float, string, float, float);
        void getPresentacion();
        void getInfo();
};
Chocolate::Chocolate(){}

Chocolate::Chocolate(string _nombre, string _marca, float _precio, string _presentacion, float _cacaho, float _gramaje) : Product(_nombre, _marca, _precio){
    presentacion = _presentacion;
    cacaho = _cacaho;
    gramaje = _gramaje;
}

void Chocolate::getInfo(){
    getNombre();
    cout << "" << endl;
}

void Chocolate::getPresentacion(){
    getNombre();
    cout << presentacion << endl;
    cout << "Porcentaje de Cacaho: "<<cacaho << endl;
    cout << "Gramaje: " <<gramaje << "g" <<endl;
    cout << "" << endl;
}
#endif
