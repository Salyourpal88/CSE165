#ifndef CIRCLE_H
#define CIRCLE_H
#include <cmath>
#define _USE_MATH_DEFINES
#include <iostream>

class Circle{
private:
    double x, y, r;
public:
    Circle(){
    this -> x = 0;
    this -> y = 0;
    this -> r = 1;
    }
    double area = M_PI;

    double getX(){
    return x;
    }

    double getY(){
    return y;
    }

    double getR(){
    return r;
    }

    double setX(double x){
        this -> x = x;
    }

    double setY(double y){
        this -> y = y;
    }

    double setR(double r){
        this -> r = r;
    }
};



#endif