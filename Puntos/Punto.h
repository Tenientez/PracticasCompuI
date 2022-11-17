#include <array>
#include <math.h>
#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

#include <iostream>
#include <array>
using namespace std;
/*Comentar cualquier cosa*/

class Punto2D {
public:
    float GetX();
    float GetY();
    void SetPosicion(float x, float y);
    void Trasladar(float temp1, float temp2);
    void Escalar(float temp1, float temp2);
    void RotarRespectoAlOrigen(float temp1);



private:

    array <float, 2> Pi {};
    array < array <float,2>, 2> Rot {};

};

#endif //PUNTOS_PUNTO_H
