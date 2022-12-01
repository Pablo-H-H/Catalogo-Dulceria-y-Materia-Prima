#include <iostream>
#ifndef ARTICULODEFIESTA
#define ARTICULODEFIESTA
#include "Product.h"
#include <sstream>
#include <string.h>

class ArticulodeFiesta : public Product{
    private:
        int unidad;
        string color;
        string tamanio;

    public:
        ArticulodeFiesta();
        ArticulodeFiesta(string, string, float, int, string, string);
        void getPresentacion();
        void getInfo();

};
ArticulodeFiesta::ArticulodeFiesta(){}

ArticulodeFiesta::ArticulodeFiesta(string _nombre, string _marca, float _precio, int _unidad, string _color, string _tamanio) : Product(_nombre, _marca, _precio){

    unidad = _unidad;
    color = _color;
    tamanio = _tamanio;
}

void ArticulodeFiesta::getInfo(){
    getNombre();
}

void ArticulodeFiesta::getPresentacion(){
    getNombre();
    cout << "Unidad por paquete: " << unidad << endl;
    cout << "Color: " << color << endl;
    cout << "Tamaño: " << tamanio << endl;
    cout << "" << endl;
}

#endif
