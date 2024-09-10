#include "Matriz.h"
#include <cstdlib>
#include <iostream>

using namespace std;

inline void Matriz::llenarMatriz()
{
    srand(time(0)); // Inicializar la semilla
    for (int fil = 0; fil < fila; fil++)
    {
        for (int col = 0; col < columna; col++)
        {
            elementos[fil][col] = rand() % 100 + 1; // Números aleatorios de 1 a 100
        }
    }
}

inline bool Matriz::SumarMatriz(Matriz matB, Matriz &matC)
{
    if (fila != matB.fila || columna != matB.columna)
        return false;

    for (int fil = 0; fil < fila; fil++)
    {
        for (int col = 0; col < columna; col++)
        {
            matC.elementos[fil][col] = elementos[fil][col] + matB.elementos[fil][col];
        }
    }
    return true;
}

inline bool Matriz::RestarMatriz(Matriz matB, Matriz &matC)
{
    if (fila != matB.fila || columna != matB.columna)
        return false;

    for (int fil = 0; fil < fila; fil++)
    {
        for (int col = 0; col < columna; col++)
        {
            matC.elementos[fil][col] = elementos[fil][col] - matB.elementos[fil][col];
        }
    }
    return true;
}

inline bool Matriz::MultiplicarMatriz(Matriz matB, Matriz &matC)
{
    if (columna != matB.fila) // Condición para multiplicar
        return false;

    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < matB.columna; j++)
        {
            matC.elementos[i][j] = 0;
            for (int k = 0; k < columna; k++)
            {
                matC.elementos[i][j] += elementos[i][k] * matB.elementos[k][j];
            }
        }
    }
    return true;
}

inline void Matriz::Imprimir()
{
    cout << endl;
    cout << endl;
    cout << endl;

    for (int fil = 0; fil < fila; fil++)
    {
        for (int col = 0; col < columna; col++)
        {
            cout << elementos[fil][col] << " ";
        }
        cout << endl;
    }
}

// inline Matriz::~Matriz()
// {
//     cout << " Destruyendo matriz " << endl;
// }