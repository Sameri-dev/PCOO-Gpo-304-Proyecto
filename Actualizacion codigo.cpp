#include <iostream>
using namespace std;

//abrimos clase de usuario o trbabjador-worker
class Usuario {
//ponemos los datos que seran privados
private:

//Puesto
    string PuestoUsuario = "check-in";
//Nomina
    string Nomina = "G51894";

//Datospublicos(con los que trabajaremos y modificaremos)
public:

//nombre
    string RegistroUsuario;

//Pedimos el nombre del usuario y este mostrara tambien los datos privados
    void setRegistroUsuario() {
        cout << "Ingrese su nombre: ";
        cin >> RegistroUsuario;
        cout << "Ingrese su puesto: " << PuestoUsuario << endl;
        cout << "Ingrese su nomina: " << Nomina << endl;
    }

};

//Abrimos otra clase que sera la habitacion (servira para herencia)
class Habitacion {
//El dato que no queremos cambair por l=nada del mundo es el numero de habitacion del cliente
private:
    int NumeroRoom;
//numero es igual al numero de habitacion y con este trabajaremos y modificaremos mas adelante
public:
    Habitacion(int numero) {
        NumeroRoom = numero;
    }

//getter para el numero de habitacion
    int getNumeroRoom() {
        return NumeroRoom;
    }

//funcion(constructor) que utilizaremos mas adelante    
    void GetInfo(){
        cout << "Numero de Habitacion: " << NumeroRoom << endl;
    }

};

//Abrimos otra clase para la habitacion estandar
class HabStandar : public Habitacion {
//el dato usado es numero por lo que es publico
public:
    HabStandar(int numero) : Habitacion(numero) {}

//este constructor debe de dar la habitacion A+numerohabitacion en caso de que lo llamemos en las condiciones
    void GetInfo() {
        cout << "Habitacion estandar - Numero: A" << NumeroRoom << endl;
    }
};

//Abrimos otra clase para la habitacion normal
class HabNormal : public Habitacion {
//el dato usado es numero por lo que es publico
public:
    HabNormal(int numero) : Habitacion(numero) {}
//este constructor debe de dar la habitacion B+numerohabitacion en caso de que lo llamemos en las condiciones
    void GetInfo() {
        cout << "Habitacion normal - Numero: B" << NumeroRoom << endl;
    }
};

//Clase para los VIP
class VIP : public Habitacion {
//el dato usado es numero por lo que es publico
public:
    VIP(int numero) : Habitacion(numero) {}
//este constructor debe de dar la habitacion B+numerohabitacion en caso de que lo llamemos en las condiciones
    void GetInfo() {
        cout << "Habitacion VIP - Numero: C" << NumeroRoom << endl;
    }
};

//Abrimos clase de cliente que se relacione con habitacion
class Cliente: public Habitacion{
//Datos no modificables
private:
    int NumeroRoom;
//Datos modificables
public:
//nombre
    string NombreCliente;
//numero de habitacion con el que se registro
    Cliente(int numero) : Habitacion(numero), NumeroRoom(0) {}

//Pedimos por el nombre del cliente y su numero de registro
    void setNumeroRoom() {
        cout << "Ingrese su nombre: ";
        cin >> NombreCliente;
        cout << "Ingrese su numero de registro: ";
        cin >> NumeroRoom;
    }

//getter del numero de habitacion
    int getNumeroRoom() {
        return NumeroRoom;
    }

//Condiconales para asiganrles la habitacion a los clientes
    Habitacion* asignacionRoom() {
        if (NumeroRoom % 5 == 0) {
            return new VIP(getNumeroRoom());
        } else if (NumeroRoom % 3 == 0) {
            return new HabNormal(getNumeroRoom());
        } else {
            return new HabNormal(getNumeroRoom());
        }
    }

//Presentacion de la informacion
    void setInfo() {
        cout << "Usuario - Nombre: " << NombreCliente<< endl;
        Habitacion::GetInfo();
    }
};

//Asumiendo que el hotel tenga 10 clientes abrimos main
int main() {

//Sabemos que necesitaremos 10 habitaciones
    int NumRooms = 10;

    for (int i = 1; i <= NumRooms * 2; i += 2) {
        HabHotel.push_back(new HabStandar(i));
    }

    for (int i = 1; i <= NumRooms * 3; i += 3) {
        HabHotel.push_back(new HabNormal(i));
    }

    for (int i = 1; i <= NumRooms * 5; i += 5) {
        HabHotel.push_back(new VIP(i));
    }

    Cliente user(0);
    user.setGetInfo();
    user.setNumeroRoomo();


    return 0;
}
