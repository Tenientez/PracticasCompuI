//
// Created by V303_11 on 09/11/2022.
//

#define _USE_MATH_DEFINES
#include <array>
#include <iostream>
#include <cmath>
#include "Punto.h"


using namespace std;

float Punto2D::GetX() {
    return Pi[0];
}

float Punto2D::GetY() {
    return Pi[1];
}

void Punto2D::SetPosicion(float x, float y) {
    Pi[0] = x;
    Pi[1] = y;
}

void Punto2D::Trasladar(float temp1, float temp2) {
    Pi[0] = Pi[0] + temp1;
    Pi[1] = Pi[1] + temp2;

 }

void Punto2D::Escalar(float temp1, float temp2) {
    Pi[0] = Pi[0] * temp1;
    Pi[1] = Pi[1] * temp2;
}

 void Punto2D::RotarRespectoAlOrigen(float temp1) {
     array <float, 2> Pf {};

     Rot[0][0] = cos((temp1 / 180) * M_PI);
     Rot[0][1] = sin((temp1 / -180) * M_PI);
     Rot[1][0] = sin((temp1 / 180) * M_PI);
     Rot[1][1] = cos((temp1 / 180) * M_PI);

     for (int i = 0; i < 2; i++) {
         for (int j = 0; j < 2; j++) {
             Pf[i] = Pf[i] + Rot[i][j] * Pi[j];
         }

     }
     Pi[0] = Pf[0];
     Pi[1] = Pf[1];
 }

