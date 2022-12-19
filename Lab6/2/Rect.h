#ifndef Rect_H
#define Rect_H
#include <iostream>
#include <vector>
#include "Vec.h"

using namespace std;

class Rect : public Vec{
    public:
    float a, b, c, d, e, f;
    Rect(){
        this -> a = 0;
        this -> b = 0;
        this -> c = 0;
        this -> d = 0;
        this -> e = 0;
        this -> f = 0;
    }
    Rect(float a, float b, float c, float d){
        this -> a = a;  //-5
        this -> b = b;  //-5
        this -> c = c;  //2L
        this -> d = d;  //2W
        this -> e = a + c; //-3 
        this -> f = b - d; //-7

    }
    inline bool contains(const Vec & u){
        if((a <= u.x) && (u.x <= e) && (b >= u.y) && (u.y >= f)){ 
            return true;
        }
        else{
            return false;
        }
    }
};
#endif