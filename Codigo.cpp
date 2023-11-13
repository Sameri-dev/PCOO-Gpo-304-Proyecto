#include <iostream>

//abrimos clase de usuario o trbabjador-worker
class Usuario {
    //ponemos los datos que vmos a obtener en privado
    private:
        //nombre
        string RegistroUsuario; 
        //puesto
        string PuestoUsuario;
        //nomina
        int Nomina;

    public:
        //constructor de usuario sololo que queremos publico
        //nombre
        Usuario() : RegistroUsuario(0) {} 
        //nomina
        Usuario() : Nomina(0) {} 
        //el puesto se queda privado

        // Funcion para ingresar los datos de usuario
        void RegistroUsuario() {
            //pedimos nombre
            std::cout << "Ingrese su nombre: ";
            //guardamos
            std::cin >> RegistroUsuario;
            //pedimos puesto 
            std::cout << "Ingrese su puesto: ";
            //guardamos puesto
            std::cin >> PuestoUsuario;
            //pedimos nomina
            std::cout << "Ingrese su nomina: ";
            //guardamos nomina
            std::cin >> Nomina;
        }

};

//abrimos clase del cliente
class Cliente {
    //datos en privado
    private:
        //nombre
        string NombreCliente;
        //numero de checkin
        int NumeroRegistro;

        //constructor del cliente que queremos hacer publicos
    public:
        //numero check-in
        Cliente() : NumeroRegistro(0) {}

        // Funcion para ingresar el numero de registro
        void getNumeroRegistro() {
            std::cout << "Ingrese su numero de registro: ";
            std::cin >> NumeroRegistro;
        }

};

//abrimos main
int main() {

    Usuario worker;
    //pedimos la nomina
    worker.setNominaUsuario();
    //pedimos el nombre del worker
    worker.setRegistroUsuario();

    Cliente customer;

    //pedimos el numero de registro
    customer.setNumeroRegistro();

    return 0;
}

//agregar funcion para que separe a los clientes
//agregar funcion para que de numero de habitacion
