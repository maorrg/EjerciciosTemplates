#include <iostream>

#ifndef EJERCICIOS_EJERCICIO10_H
#define EJERCICIOS_EJERCICIO10_H

using namespace std;


template<template<typename, typename...>class container, typename ...Types, typename T>
        int Min_size(container<T> firstCont, Types ... args) {
    int min = size(firstCont);

    return min < size(args...) ? min : size(args...);

}

#endif //EJERCICIOS_EJERCICIO10_H
