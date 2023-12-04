#ifndef HABITACIONESTANDAR_H
#define HABITACIONESTANDAR_H

#include<iostream>
#include<string>
#include "Habitacion.h" 

//Abrimos una clase para la habitacion estandar (herencia)
class HabitacionEstandar : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion de la habitacion estandar
    HabitacionEstandar(int numero)
        : Habitacion("A", (numero % 2 == 0) ? numero : numero + 1) {}
};
