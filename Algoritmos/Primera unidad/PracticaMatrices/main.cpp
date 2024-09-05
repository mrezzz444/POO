#include <bits/stdc++.h>
#include "src\Matriz.cpp"

using namespace std;
bool tamanio(unsigned short int &, unsigned short int &); //Parametros por referencia
unsigned short int menu();
void operaciones(void);
void mensaje(char);
int main()
{
    unsigned short int eleccion, filas, columnas;
    do{
        eleccion = menu();
    }while(eleccion !=5);

    // cout<<"Hello World";
    unsigned short int menu();
    
    return 0;
}

bool tamanio(unsigned short int &fil, unsigned short int &col)
{
    cout <<"Teclea las filas ";
    cin >> fil;
    cout <<"Teclea las columnas";
    cin >> col;

    return  (fil >= 2 and fil <=10) and (col >= 2 and col <=10);

    //optimizando codigo aparentemente 

    // if((fil >= 2 and fil <=10) and (col >= 2 and col <=10)) return true;
    // return false;
}

//Presenta el menu de opciones
unsigned short int menu()
{
    unsigned short int opcion;

    do{

        system("CLS");
        cout <<"********** Menú de opciones **********" << endl;
        cout << "1. Leer tamaño" << endl;
        cout << "2. Suma" << endl;
        cout << "3. Resta" << endl;
        cout << "4. Multiplicacion" << endl;
        cout << "5. Salir" << endl;
        cin >> opcion;

    }while(opcion <1 || opcion > 5);
    
    return opcion;
}

void operaciones(void)
{
    unsigned short int fil, col, opcion;
    bool centinela = false;
    Matriz mat1(0, 0), mat2(0, 0), mat3(0, 0), resul(0,0); // Declarar matrices aquí para tener acceso en todos los casos
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                cout << "Llenando tamaño" << endl;

                if (tamanio(fil, col)) {
                    centinela = true;
                    //Creando los objetos y se corren los contructores
                    mat1 = Matriz(fil, col); // Creamos las matrices con el tamaño especificado
                    mat2 = Matriz(fil, col);
                    resul = Matriz(fil, col); // Matriz para resultados
                    cout << "Matrices creadas con éxito." << endl;
                } else {
                    mensaje(0);
                    centinela = false;
                }
                break;

            case 2:
                if (centinela) {
                    // Sumar las matrices
                    if (mat1.SumarMatriz(mat2, resul)) {
                        mensaje(1);
                        cout << "Matriz 1:" << endl;
                        mat1.Imprimir();
                        cout << "Matriz 2:" << endl;
                        mat2.Imprimir();
                        cout << "Resultado de la suma:" << endl;
                        resul.Imprimir();
                    } else {
                        mensaje(0);
                    }
                } else {
                    mensaje(0);
                }
                break;

            case 3:
                if (centinela) {
                    // Restar las matrices
                    if (mat1.RestarMatriz(mat2, resul)) {
                        mensaje(1);
                        cout << "Matriz 1:" << endl;
                        mat1.Imprimir();
                        cout << "Matriz 2:" << endl;
                        mat2.Imprimir();
                        cout << "Resultado de la resta:" << endl;
                        resul.Imprimir();
                    } else {
                        mensaje(0);
                    }
                } else {
                    mensaje(0);
                }
                break;

            case 4:
                if (centinela) {
                    // Multiplicar las matrices
                    if (mat1.MultiplicarMatriz(mat2, resul)) {
                        mensaje(1);
                        cout << "Matriz 1:" << endl;
                        mat1.Imprimir();
                        cout << "Matriz 2:" << endl;
                        mat2.Imprimir();
                        cout << "Resultado de la multiplicación:" << endl;
                        resul.Imprimir();
                    } else {
                        mensaje(0);
                    }
                } else {
                    mensaje(0);
                }
                break;

            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
        }
    } while (opcion != 5);
}


void mensaje(char valor)
{
    if(1){
        cout <<"Operacion realizada " << endl;
    }
    else{
    cout <<"Error, algo salio mal" << endl;
    }
}