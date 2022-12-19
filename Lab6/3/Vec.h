#ifndef VEC_H
#define VEC_H
#include <iostream>
#include <vector>

using namespace std;

class Vec{
    public:
    static Vec null;
    float x, y;

    Vec(){
        this -> x = 0;
        this -> y = 0;
    } 

    Vec(float x, float y){
        this -> x = x;
        this -> y = y;
    }

    void add(Vec k){
        this -> x += k.x;
        this -> y += k.y;
    }

    void print(){
        cout << "[" << this -> x << " , " << this -> y << "]" << '\n';
    }
};
Vec Vec::null = Vec();
#endif