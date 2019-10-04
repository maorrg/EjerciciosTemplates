#include <iostream>
#include <vector>

#ifndef EJERCICIOS_EJERCICIO2_H
#define EJERCICIOS_EJERCICIO2_H

using namespace std;


template<template<typename...>class container, typename T>
container<container<T>> split_range(container<T> contenedor,int n){
    container<container<T>> contDeCont(n);
    container<T> cont;
    int numEle = contenedor.size() /n;
    int contador = 0;
    int posConts = 0;

    for(auto it=begin(contenedor);it != end(contenedor);it++){
        if(contador<numEle)
            cont.push_back(*it);
        else {
            contDeCont[posConts++] = cont;
            cont.clear();
            contador = 0;
        }
    }

    return contDeCont;
}




#endif //EJERCICIOS_EJERCICIO2_H
