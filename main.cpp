#include <iostream>
#include "Usuario.h"
#include "Product.h"

using namespace std;


int main()
{
    string usuario;
    string nombreUsuario;
    string correoUsuario;
    string contraseniaUsuario;
    string direccionUsuario;
    string metodoPagoUsuario;

    cout << "Bienvenido" << endl;
    cout << "Por favor ingresa tu correo" << endl;
    cout << "En el caso de que no tengas una cuenta por favor escribe 'n' " << endl;
    cin >> usuario;

    ArticuloFiesta a1 = ArticuloFiesta("Gomitas", "Dulces Pablo", 978, true, false, 354, "blanco", 98.6);
    cout << a1.getColor() << endl;

    Frituras f1 = Frituras("Chicharrones", "Dulces Pablo", 987, true, false, "Piquin", "Chicharron", "Lagrimita", 897.7);
    cout << f1.getSabor() << endl;

    Chocolate c1 = Chocolate("Chicharrones", "Dulces Pablo", 987, true, false, "Negro", 0.90, 978);
    cout << c1.getPresentacion() << endl;

    if (usuario == "n"){
        cout << "Ingresa tu nombre" << endl;
        cin >> nombreUsuario;

        cout << "Ingresa tu correo" << endl;
        cin >> correoUsuario;

        cout << "Ingresa tu contrasenia" << endl;
        cin >> contraseniaUsuario;

        cout << "Ingresa tu direccion" << endl;
        cin >> direccionUsuario;

        cout << "Ingresa tu metodo de pago" << endl;
        cin >> metodoPagoUsuario;

        Usuario u1 = Usuario(nombreUsuario, correoUsuario, contraseniaUsuario, direccionUsuario, metodoPagoUsuario);

    cout << "Entregando sabor" << endl;
    }

    return 0;
}


