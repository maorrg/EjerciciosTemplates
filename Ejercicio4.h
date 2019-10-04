#include <iostream>

#ifndef EJERCICIOS_EJERCICIO4_H
#define EJERCICIOS_EJERCICIO4_H


template<template<typename, typename...>class container, typename T>
container<T> delete_item(container<T> data, T value){
    container<T> vr;
    for(auto it=begin(data);it != end(data);it++){
        if(*it != value)
            vr.push_back(*it);
    }
    return vr;
}


template<template<typename, typename...>class container, typename T>
container<T> delete_item(container<T> data, container<T> valoresDelete){
    container<T> vr;
    int validar = 0;
    for(auto it=begin(data);it != end(data);it++){
        for(auto it2=begin(valoresDelete);it2 != end(valoresDelete);it2++){
            if(*it != *it2)
                validar++;
        }
        if(validar == valoresDelete.size())
            vr.push_back(*it);

        validar = 0;
    }

    return vr;
}



#endif //EJERCICIOS_EJERCICIO4_H
