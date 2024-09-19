#include "Conjunto.h"
#include <iostream>
using namespace std;
inline bool Conjunto::Member(typeinfo dato)
{
    for (int i = 0; i < card; i++)
    {
        if (elementos[i] == dato)
        {
            return true;
        }
    }
    return false;
}

inline bool Conjunto::AddElem(typeinfo dato)
{
    if ((card == maxCard) || Member(dato))
        return false;
    elementos[card++] = dato; // aqui aumenta en uno de una vez la variable de card
}

inline bool Conjunto::RmvElem(typeinfo dato)
{
    for (int i = 0; i < card; i++)
    {
        if (elementos[i] == dato)
        {
            elementos[i] = elementos[card - 1];
            card--;
            return true;
        }
    }
    return false;
}

inline void Conjunto::Print()
{
    cout << "{  ";

    for (int i = 0; i < card - 1; i++)
    {
        std::cout << elementos[i] << ", ";

        if (!card)
            cout << "} ";
        else
            cout << elementos[card] << "} ";
    }
}

inline bool Conjunto::Union(Conjunto conj2, Conjunto &conj3)
{
    conj3.card = 0;
    for (int i = 0; i < card; i++)
        conj3.AddElem(elementos[i]);

    for (int i = 0; i < conj2.card; i++)
    {
        if (conj3.card == maxCard)
            return false;
        else
            conj3.AddElem(conj2.elementos[i]);
    }
}
