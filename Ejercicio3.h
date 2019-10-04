#include <iostream>

#ifndef EJERCICIOS_EJERCICIO3_H
#define EJERCICIOS_EJERCICIO3_H

using namespace std;


template<template<typename...>class container, typename T>
container<T> Sumar_rango(container<T> v1, container<T> v2){
    container<T> vr;
    int pos = 0;
    int cont;
    container<T> max;
    container<T> min;

    if(v1.size() == v2.size()){
        for(auto it=begin(v1);it != end(v1); it++){
            vr.push_back(*it+v2[pos++]);
        }
    }else{
        if(v1.size() > v2.size()) {
            max = v1;
            min = v2;
        } else {
            max = v2;
            min = v1;
        }
        for(auto i=0;i<max.size();i++){
            if(cont<min.size()) {
                vr.push_back(max[i] + min[cont++]);
            }
            else{
                cont = 0;
                vr.push_back(max[i]+min[cont++]);
            }
        }
    }

    return vr;
}


#endif //EJERCICIOS_EJERCICIO3_H
