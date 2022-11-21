#ifndef USUARIO
#define USUARIO
using namespace std;

class Usuario
{
    private:
        string nombre;
        string correo;
        string contrasenia;
        string direccion;
        string metodoPago;
    public:
        Usuario(string, string, string, string, string);
    protected:


};

Usuario::Usuario(string _nombre, string _correo, string _contrasenia, string _direccion, string _metodoPago){
    nombre = _nombre;
    correo = _correo;
    contrasenia = _contrasenia;
    direccion = _direccion;
    metodoPago = _metodoPago;
}


#endif
