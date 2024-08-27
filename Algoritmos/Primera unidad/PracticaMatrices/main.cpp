#include <bits/stdc++.h>
#include "src\Matriz.cpp"
using namespace std;

bool t_usuario(unsigned short int &, unsigned short int &); //Parametros por referencia
unsigned short int menu();



int main()
{
    unsigned short int eleccion, filas, columnas;
    do{
        eleccion = menu();
    }while(eleccion !=5);

    cout<<"Hello World";
    unsigned short int menu();

    return 0;
}

bool t_usuario(unsigned short int &fil, unsigned short int &col)
{
    cout <<"Teclea las filas ";
    cin >> fil;
    cout <<"Teclea las columnas";
    cin >> col;

    if((fil >= 2 and fil <=10) and (col >= 2 and col <=10)) return true;

    return false;
}


unsigned short int menu()
{
    unsigned short int opcion;

    do{

        system("CLS");
        cout <<"********** Menú de opciones **********" << endl;
        cout << "1. Leer tamaño" << endl;
        cout << "2. Suma" << endl;
        cout << "3. Resta" << endl;
        cout << "4. MUltiplicacion" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;


    }while(opcion <1 || opcion > 5);
    
    return opcion;
}
