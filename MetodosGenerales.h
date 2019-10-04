#include <iostream>


#ifndef EJERCICIOS_METODOSGENERALES_H
#define EJERCICIOS_METODOSGENERALES_H

using namespace std;


template<template<typename , typename...>class container, typename T>
void ImprimirContainer(container<T>datos){
    int cont = 0;

    cout << "{";
    for(auto it = begin(datos);it != end(datos); it++){
        cout << *it;
        if(++cont<datos.size())
            cout << ", ";
    }
    cout << "}" << endl;
}



#endif //EJERCICIOS_METODOSGENERALES_H
