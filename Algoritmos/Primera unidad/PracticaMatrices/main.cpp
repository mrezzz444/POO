// Practica de operaciones con matrices
// Alumnos: Isaac Avila Saenz (238925) y Ashley Paulina Dominguez Ruiz (225751)

#include <bits/stdc++.h>
#include "src\Matriz.cpp"

using namespace std;
bool tamanio(unsigned short int &, unsigned short int &); // A estas alturas no es necesario poner nombre a las variables
unsigned short int menu();
void operaciones(Matriz, Matriz, Matriz &);
void mensaje(char);

int main()
{
    unsigned short int fil, col;
    setlocale(LC_ALL, "");
    cout << "Creando arreglos" << endl;
    if (tamanio(fil, col))
    {
        // Crear los arreglos y se recorren los constructores
        Matriz mat1(col, fil), mat2(col, fil), resul(col, fil);
        operaciones(mat1, mat2, resul);
    }
    else
        mensaje(0);

    cout << "Hola mundo!" << endl;
    return 0;
}
// pide y guarda el tamaño de la matriz
bool tamanio(unsigned short int &fil, unsigned short int &col)
{
    cout << "Teclee las filas: ";
    cin >> fil;
    cout << "Teclee las columnas: ";
    cin >> col;
    return (fil >= 2 && fil <= 10) && (col >= 2 && col <= 10);
}

// presenta menu de opciones
unsigned short int menu()
{
    unsigned short int opcion;
    setlocale(LC_ALL, "");
    do
    {
        system("CLS");
        cout << "****** Menú de opciones ******** " << endl;

        cout << "1) Suma " << endl;
        cout << "2) Resta " << endl;
        cout << "3) Multiplicación " << endl;
        cout << "4) Salir " << endl;
        cin >> opcion;
    } while (opcion < 1 || opcion > 5);
    return opcion;
}

// Resuelve dentro de una estructura switch las operaciones
void operaciones(Matriz mat1, Matriz mat2, Matriz &resul)
{
    unsigned short int opcion;

    setlocale(LC_ALL, "");
    do
    {
        opcion = menu();
        switch (opcion)
        {

        case 1:
            if (mat1.SumarMatriz(mat2, resul))
            {
                mensaje(1);
                mat1.Imprimir();
                mat2.Imprimir();
                resul.Imprimir();
                system("PAUSE");
            }
            else
                mensaje(0);

            break;
        case 2:
            if (mat1.RestarMatriz(mat2, resul))
            {
                mensaje(1);
                mat1.Imprimir();
                mat2.Imprimir();
                resul.Imprimir();
            }
            else
                mensaje(0);

            system("PAUSE");
            break;
        case 3:
            if (mat1.MultiplicarMatriz(mat2, resul))
            {
                mensaje(1);
                mat1.Imprimir();
                mat2.Imprimir();
                resul.Imprimir();
            }
            else
                mensaje(0);
            system("PAUSE");

            break;
        case 4:
            cout << "Saliendo del programa..." << endl;
            system("PAUSE");
        }

    } while (opcion != 4);
}

void mensaje(char valor)
{
    setlocale(LC_ALL, "");
    if (1)
        cout << "Operación realizada" << endl;
    else
        cout << "el tamaño no permite la operación" << endl;
}