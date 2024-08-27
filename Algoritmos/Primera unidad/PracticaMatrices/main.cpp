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
    opcion = menu();

    do{

    }while(opcion);
    {
    switch (opcion)
    {
           case 1:
                cout <<"Llenando tamaño" << endl;

                if (tamanio(fil, col))
                {
                    centinela = true;
                    Matriz mat1(col, fil), mat2(col,fil), mat3(col,fil);
                }
                else  
                {
                    mensaje();
                    centinela = false;            
                    break;
                }  
                   

                break;
            
            case 2:
                
                if(centinela){
                    //Sumar la matriz
                    mat1.SumatMatriz(mat2, resul);
                    

                    mensaje();
                }else{

                }

                break;
            
            case 3:
                if(centinela){
                    mensaje();
                }else{

                }

                break;
            
            case 4:
                if(centinela){
                    mensaje();
                }else{

                }

                break;
            
            case 5:
                
            
            default:
                // Code for default case
                break;
     }
    };
  
}

void mensaje(char valor)
{
    if(valor == "1")
    cout <<"Error, algo salio mal" << endl;
}