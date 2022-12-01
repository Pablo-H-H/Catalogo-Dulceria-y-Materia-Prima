#include <iostream>
#ifndef PRODUCTO
#define PRODUCTO
#include <sstream>

using namespace std;

class Product
{
    private:
        string nombre;
        string marca;
        float precio;
    public:
        Product();
        Product(string, string, float);
        void getNombre();
        string soloNombre();
    protected:


};


Product::Product(){}
Product::Product(string _nombre, string _marca, float _precio){
    nombre = _nombre;
    marca = _marca;
    precio = _precio;
}




void Product::getNombre(){
    cout << "Nombre: " << nombre << endl;
    cout << "Marca: " << marca << endl;
    cout << "Precio: " << precio << endl;
}


string Product::soloNombre(){
    return nombre;
}

#endif
