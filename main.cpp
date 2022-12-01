#include <iostream>
#include "Usuario.h"
#include "Product.h"
#include "Catalogo.h"
#include "Chocolate.h"

using namespace std;


int main()
{
    /*
    cout << "Bienvenido al creador de presupuestos" <<endl;
    cout << "Por cuestiones de practicidad te daremos un usuario ya creado" << endl;
    cout << "Tu correo es: Correos@gmail.com" << endl;
    cout << "Tu contraseña es: lapapa10000" << endl;

    Usuario usuario("Pablo", "lapapa10000", "Correos@gmail.com", "Nueva Constitucion No 100");

    string correoUsuario;
    string contraseniaUsuario;
    string correo = usuario.getCorreoUsuario();
    string contrasenia = usuario.getContraseniaUsuario();

    cout << "Bienvenido" << endl;
    do {
    cout << "Por favor ingresa tu correo correctamente" << endl;
    cin >> correoUsuario;
    } while (correoUsuario != correo);

    cout << "Correo Correcto" << endl;

    do {
    cout << "Por favor ingresa tu contrseña correctamente" << endl;
    cin >> contraseniaUsuario;
    } while (contraseniaUsuario != contrasenia);
    */
    Catalogo catalogo;
    string opcion;

    do {
    cout << "Sesion iniciada correctamente" << endl;
    cout << "Tenemos Diferentes Categorias de Productos" << endl;
    cout << "Por favor ingresa la lista de Productos que quieres ver: " << endl;
    cout << "Chocolates" << endl;
    cout << "Frituas" << endl;
    cout << "Articulos de Fiesta" << endl;
    cout << "" << endl;
    cout << "En el caso de querer salir del programa escribe: salir" << endl;
    //cout << "Si quieres saber toda la info de un producto escribe su nombre"<< endl;
    cin >> opcion;

    //catalogo.masInfo(opcion);

    if (opcion == "Chocolates") {
            cout << "Lista de Chocolates" << endl;
    catalogo.leerInfoChocolate();
    cout << "" << endl;
    cout << "" << endl;
    }

    if (opcion == "Frituras") {
            cout << "Lista de Frituras" << endl;
    catalogo.leerCatalogoFrituras();
    cout << "" << endl;
    cout << "" << endl;
    string producto;
    }
    if (opcion == "Articulos de Fiesta"){
    cout << "Lista de Articulos de Fiesta" << endl;
    catalogo.leerCatalogoArticulodeFiesta();

    }

    } while (opcion != "salir");

    string n;

    return 0;
}

