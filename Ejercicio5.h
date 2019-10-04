#include <iostream>

#ifndef EJERCICIOS_EJERCICIO5_H
#define EJERCICIOS_EJERCICIO5_H




template<template<typename, typename...>class container, typename T>
container<T> delete_duplicated(container<T> data){
    container<T> vr;
    int validar = 0;
    for(auto it=begin(data);it != end(data);it++){
        for(auto it2=begin(vr);it2 !=end(vr);it2++){
            if(*it != *it2)
                validar++;
        }
        if(validar == vr.size()) {
            vr.push_back(*it);
        }
        validar = 0;
    }
    return vr;
}





#endif //EJERCICIOS_EJERCICIO5_H
