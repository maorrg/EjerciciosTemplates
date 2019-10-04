#include <iostream>

#ifndef EJERCICIOS_EJERCICIO6_H
#define EJERCICIOS_EJERCICIO6_H


template<template<typename, typename ...>class container, typename T,typename C>
container<T> rotate_range(container<T> data, C rotar){

    if(rotar > 0)
        std::rotate(data.begin(),data.begin()+data.size()-rotar,data.end());
    else if(rotar <0)
        std::rotate(data.begin(),data.begin()+data.size()+rotar-1,data.end());


    return data;
}






#endif //EJERCICIOS_EJERCICIO6_H
