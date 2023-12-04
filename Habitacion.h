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

//Creamos la clase de habitacion que es la que usaremos para la herencia
class Habitacion {
//datos privatos son:
private:
//el tipo
    string tipo;
//y su numero
    int numero;
//datos publicos:    
public:
//contructor de habitacion
    Habitacion(string type, int num){
        tipo = type; 
        numero = num;
        
    }
//metodo para mostra la habitacion usando los datos de tipo y numero
    void mostrarHabitacion() {
        cout << "Habitación: " << tipo << numero <<endl;
    }

};
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

//Abrimos una clase para la habitacion estandar (herencia)
class HabitacionEstandar : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion de la habitacion estandar
    HabitacionEstandar(int numero)
        : Habitacion("A", (numero % 2 == 0) ? numero : numero + 1) {}
};

//Abrimos una clase para la habitacion normal (con herencia)
class HabitacionNormal : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion de la habitacion normal
    HabitacionNormal(int numero)
        : Habitacion("B", (numero % 3 == 0) ? numero : (numero / 3 + 1) * 3) {}
};

//Clase habitacion VIP usando la herencia de habitacion
class HabitacionVIP : public Habitacion {
//datos publicos
public:
//contructor para la asiganacion Vip
    HabitacionVIP(int numero)
        : Habitacion("C", (numero % 5 == 0) ? numero : (numero / 5 + 1) * 5) {}
};
