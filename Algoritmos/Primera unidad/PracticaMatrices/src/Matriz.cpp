#include "Matriz.h"
#include <bits/stdc++.h> //Biblioteca que contiene casi todas las librerias estandar

using namespace std;

inline void Matriz::llenarMatriz()
{
	//Se tiene que generar la semilla para no repetir los numeros aleatorios
	for(int fil = 0; fil<fila; fil++)
	{
		for(int col = 0; col<columna; col++)
		{
			elementos[fil][col] = rand()%100 + 1; //rango de 1 a 100
		}
	}
}

inline bool Matriz:: SumarMatriz(Matriz matB, Matriz& matC) {
	if ((fila != matB.fila) or (columna != matB.columna))
		return false;
		
	for(int fil = 0; fil<fila; fil++)
	{
		for(int col = 0; col<columna; col++)
		{
			cout << elementos[fil][col]  << " " ;

			//return (fil == fila && col == columna) ? true : false;
			return (fil == fila && col == columna);


		}


	}


}//funcion para sumar matrices, obviamente u.u
inline bool Matriz::RestarMatriz(Matriz matB, Matriz& matC) {
    if ((fila != matB.fila) || (columna != matB.columna))
        return false;
    
    for(int fil = 0; fil < fila; fil++) {
        for(int col = 0; col < columna; col++) {
            matC.elementos[fil][col] = elementos[fil][col] - matB.elementos[fil][col];
        }
    }
    
    return true;
}


inline bool Matriz::MultiplicarMatriz(Matriz, Matriz&) {}

inline void Matriz::Imprimir()
{
	for(int fil = 0; fil<fila; fil++)
	{
		for(int col = 0; col<columna; col++)
		{
			cout << elementos[fil][col]  << " " ;
		}
		cout <<endl;

	}
}