#include <iostream>
#ifndef USUARIO
#define USUARIO
using namespace std;

class Usuario
{
    private:
        string nombreUsuario;
        string contraseniaUsuario;
        string correoUsuario;
        string direccionUsuario;


    public:
        Usuario(string, string, string, string);
        string getCorreoUsuario();
        string getContraseniaUsuario();
    protected:


};

Usuario::Usuario(string _nombreUsuario, string _contraseniaUsuario, string _correoUsuario, string _direccionUsuario){
    nombreUsuario = _nombreUsuario;
    correoUsuario = _correoUsuario;
    contraseniaUsuario = _contraseniaUsuario;
    direccionUsuario = _direccionUsuario;
}

string Usuario::getCorreoUsuario(){
    return correoUsuario;
}

string Usuario::getContraseniaUsuario(){
    return contraseniaUsuario;
}

#endif
