#include <iostream>

#ifndef EJERCICIOS_EJERCICIO1_H
#define EJERCICIOS_EJERCICIO1_H

using namespace std;

template<typename T>
void absolut(T valor){
    if(valor<0){
        T absolut = valor*-1;
        cout << absolut << endl;
    }else
        cout << valor << endl;
}



#endif //EJERCICIOS_EJERCICIO1_H
