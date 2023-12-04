#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <iostream>
#include <string>

using namespace std;

//Creamos la clase del empleado/usuario (me confundia asi que lo cambie)
class Empleado {
//Seleccionamos los datos en privado
private:
//nombre
    string nombre;
//puesto
    string puesto;
//nomina
    int nomina;
//los datos publicos seran:
public:
//se contruyo el empleado usando el nombre, puesto y la nomina
    Empleado(string nom, string pue, int non){ 
    nombre = nom;
    puesto = pue; 
    nomina = non;
    }
//funcion para que se presentaen los datos del empleado ordenados y en 1 linea
    void mostrarDatos() {
        cout << "Empleado: " << nombre << " - Puesto: " << puesto << " - Nómina: " << nomina << endl;
    }
};
