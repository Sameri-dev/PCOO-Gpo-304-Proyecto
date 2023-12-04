#ifndef HABITACIONVIP_H
#define HABITACIONVIP_H

#include<iostream>
#include<string>
#include "Habitacion.h" 

//Clase habitacion VIP usando la herencia de habitacion
class HabitacionVIP : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion Vip
    HabitacionVIP(int numero)
        : Habitacion("C", (numero % 5 == 0) ? numero : (numero / 5 + 1) * 5) {}
};
