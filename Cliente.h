#ifndef CLIENTE_H
#define CLIENTE_H

#include<iostream>
#include<string>
#include "Habitacion.h" 

using namespace std;

//abrimos clase del cliente
class Cliente {
//sus datos privados son:
private:
//nombre
    string nombre;
//numero de registro 
    int numeroRegistro;
//vector habitacion
    Habitacion* habitacion;
//datos publicos
public:
//contructor de cliente
    Cliente(string nombre, int numeroRegistro)
        : nombre(nombre), numeroRegistro(numeroRegistro), habitacion(nullptr) {}
/*El formato de este contructor es diferente por habitacion(nullptr)
este es un puntero nulo en este caso cliente no tiene habitacion asiganda 
asi que lo usamos para hacer referencia a que inicia en 0 
*/
//metodo para mostrar los datos del cliente
    void mostrarDatos() const {
        cout << "Cliente: " << nombre << " - Número de Registro: " << numeroRegistro <<endl;
    }
//metodo que nos ayudara para la signacion de habitacion
    void asignarHabitacion(Habitacion* nuevaHabitacion) {
        habitacion = nuevaHabitacion;
    }
/*aqui vamos a asiganrle o no una habitacion al cliente
utilizando el puntero para verificar que el cleinte no 
tenga asiganada otra habitacion
*/
    void mostrarHabitacion() const {
        if (habitacion != nullptr) {
            cout << "Habitación asignada al cliente: ";
            habitacion->mostrarHabitacion();
        } else {
            cout << "Cliente sin habitación asignada." <<endl;
        }
    }

};
