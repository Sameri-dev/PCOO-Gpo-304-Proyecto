//Abrimos una clase para la habitacion normal (con herencia)
class HabitacionNormal : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion de la habitacion normal
    HabitacionNormal(int numero)
        : Habitacion("B", (numero % 3 == 0) ? numero : (numero / 3 + 1) * 3) {}
};
