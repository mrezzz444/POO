#ifndef MATRIZ_H
#define MATRIZ_H

#define maxFila 10 //para el maximo de las filas
#define maxCol 10 //Para el maximo de las columnas

typedef float tipoDato; //Declara un alias para el tipo de dato
class Matriz
{
public:
    //Constructor para
    Matriz(unsigned short int col, unsigned short int fil) // Uno para las filas y otro para las columnas
    {
        fila = fil;
        columna = col;
        llenarMatriz();
    }

    void llenarMatriz();

    bool SumarMatriz(Matriz, Matriz& ); //funcion para sumar matrices, obviamente u.u
     
    bool RestarMatriz(Matriz, Matriz& ); //funcion para restar matrices, obviamente u.u

    bool MultiplicarMatriz(Matriz, Matriz&);

    void Imprimir();
    //void Imprimir();
    //~Matriz();
private:
    
    tipoDato elementos[maxFila][maxCol];
    unsigned short int fila, columna; // unsigned para poner puros positivos

};

// Matriz::Matriz(/* args */)
// {
// }

Matriz::~Matriz()
{
}


#endif