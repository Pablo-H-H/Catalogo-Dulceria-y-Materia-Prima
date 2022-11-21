#ifndef PRODUCTO
#define PRODUCTO

class Product
{
    private:
        string nombre;
        string marca;
        float precio;
        bool disponible;
        bool entregaDomicilio;
    public:
        Product(string, string, float, bool, bool);
        string getNombre();
    protected:


};

class ArticuloFiesta : public Product{
    private:
        int unidad;
        string color;
        float tamanio;
    public:
        ArticuloFiesta(string, string, float, bool, bool, int, string, float);
        string getColor();
};

class Frituras : public Product {
    private:
        string sabor;
        string tipo;
        string forma;
        float gramaje;
    public:
        Frituras(string, string, float, bool, bool, string, string, string, float);
        string getSabor();
};

class Chocolate : public Product {
    private:
        string presentacion;
        float cacaho;
        float gramaje;
    public:
        Chocolate(string, string, float, bool, bool, string, float, float);
        string getPresentacion();
};

Product::Product(string _nombre, string _marca, float _precio, bool _disponible, bool _entregaDomicilio){
    nombre = _nombre;
    marca = _marca;
    precio = _precio;
    disponible = _disponible;
    entregaDomicilio = _entregaDomicilio;
}

ArticuloFiesta::ArticuloFiesta(string _nombre, string _marca, float _precio, bool _disponible, bool _entregaDomicilio, int _unidad, string _color, float _tamanio) : Product(_nombre, _marca, _precio, _disponible, _entregaDomicilio){
    unidad = _unidad;
    color = _color;
    tamanio = _tamanio;
}

Frituras::Frituras(string _nombre, string _marca, float _precio, bool _disponible, bool _entregaDomicilio, string _sabor, string _tipo, string _forma, float _gramaje) : Product(_nombre, _marca, _precio, _disponible, _entregaDomicilio){
    sabor = _sabor;
    tipo = _tipo;
    forma = _forma;
    gramaje = _gramaje;
}

Chocolate::Chocolate(string _nombre, string _marca, float _precio, bool _disponible, bool _entregaDomicilio, string _presentacion, float _cacaho, float _gramaje) : Product(_nombre, _marca, _precio, _disponible, _entregaDomicilio){
    presentacion = _presentacion;
    cacaho = _cacaho;
    gramaje = _gramaje;
}

string Product::getNombre(){
    return nombre;
}

string ArticuloFiesta::getColor(){
    return color;
}

string Frituras::getSabor(){
    return sabor;
}

string Chocolate::getPresentacion(){
    return presentacion;
}

#endif
