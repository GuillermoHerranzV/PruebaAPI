#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Familia{

    public:

    struct Persona{

        string nombre;
        string apellidos;
        unsigned int DNI;
        char LDNI;

        Persona (){}
        Persona (string const & _nombre, string const & _apellidos, unsigned int _DNI, char _LDNI){

            nombre = _nombre;
            apellidos = _apellidos;
            DNI = _DNI;
            LDNI = _LDNI;

        }

    };

    struct Vivienda {

        string calle;
        unsigned int portal;

        Vivienda (){}
        Vivienda (string const & _calle, unsigned int _portal){

            calle = _calle;
            portal = _portal;

        }
    };

    vector <Persona> personas;
    vector <Vivienda> viviendas;
};

int main (){

    Familia familiaSimpson;

    return 0;
}