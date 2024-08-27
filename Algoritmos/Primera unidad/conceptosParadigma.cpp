#include <bits/stdc++.h>
using namespace std;

void Clases();
void NivelesDeAcceso();
void Constructores();
void Destructores();

int main() {
    Clases();
    NivelesDeAcceso();
    Constructores();
    Destructores();
    return 0;
}

//Ejemplo basico de una clase

void Clases() 
{
    //Definicion de la clase Persona
    class Persona {
        public:
            //Atributos de la clase (miembros de datos)
            string nombre;
            int edad;
            void mostrarInfo(){
                cout <<"Nombre: " <<nombre << ", Edad " << edad << endl;
            };

            //Ejemplo de un metodo que cambia el nombre
            void cambiarNombre(string nuevoNombre){
                nombre = nuevoNombre;
            }
    };

    //Crear un objeto de la clase persona
    Persona p1;
    //Asignamos valores a los atributos del objeto
    p1.nombre = "Isaac";
    p1.edad = 19;
    //Llamamos a un metodo del objeto
    p1.mostrarInfo();
}

//Ejemplo de niveles de acceso
void NivelesDeAcceso(){
    //Definicion de la clase persona con diferentes niveles de acceso
    class Persona {
        private:
        //Atributo privado, solo accesible dentro dee la clase
            int edad;
        public:
            //Atributo público, accesible desde cualquier parte
            string nombre;
        protected:
            string direccion;

    };

    //Creamos un objeto de la clase persona
    Persona p1;
    //p1.edad = 19; <= Eso deberia de dat error dado que es privado y solo puede usarse dentro de la clase
    p1.nombre = "Isaac"; //Esta bien, nombre es publico
    //p1.direccion = "Ciudad Juarez"; <= Eso esta mal porque direccion es pritegido

}

void Constructores()
{
    //Definicion de la clase Persona pero cun un constructor

    class Persona {
    public: 
        string nombre;
        int edad;
        
        //Constructor que inicializa los atributos
        Persona(string n, int e){
            nombre = n;
            edad = e;
        }

        //Metodo para mostrar la informacion
        void mostrarInfo(){
             cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
        }
    };

    //Crear un objeto de la clase Persona usando el constructor
    Persona p1("Isaac", 19);
    p1.mostrarInfo(); //Mostrar la info del objeto
}

//Ejemplo de destructores

void Destructores(){
    //Definicion de la clase Persona con un destructor
    class Persona{
        public:
            ~Persona(){
                cout <<"Destruyendo objeto Personad" <<endl;
            }

            void mostrarInfo()
            {
                cout <<"Esta es una Persona" <<endl;
            }
    };

    //Crear y destruir un objeto de la clase persona
    Persona p1;
    p1.mostrarInfo(); //Se muestra la info antes de destruir
}
//Aqui, al final del bloque, el destructor se llama automaticamente