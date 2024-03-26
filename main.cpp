//COMO GENERAR UN RFC//
#include <iostream>
#include <string>
using namespace std;

string obtenerHomoclave(const string& fechaNacimiento) {
   
    return "LIKE";
}

int main() 
{
    string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    
    cout << "Ingresa tu primer nombre: ";
    getline(cin, nombre);

    cout << "Ingresa tu apellido paterno: ";
    getline(cin, apellidoPaterno);

    cout << "Ingresa tu apellido materno: ";
    getline(cin, apellidoMaterno);

    cout << "Ingresa tu fecha de nacimiento (año/mes/dia): ";
    getline(cin, fechaNacimiento);

    string rfc = apellidoPaterno.substr(0, 2) + apellidoMaterno.substr(0, 1) +
    nombre.substr(0, 1) + fechaNacimiento.substr(2, 2) +
    fechaNacimiento.substr(5, 2) + fechaNacimiento.substr(8, 2);

    rfc += obtenerHomoclave(fechaNacimiento);

    cout << "El RFC calculado es: " << rfc << endl;

    return 0;
}
