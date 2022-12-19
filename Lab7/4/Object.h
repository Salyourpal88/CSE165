#ifndef Object_H
#define Object_H
#include <iostream>

using namespace std;

class Object{
    public: 
    static int count;
    Object(){
        count++;
    }
    Object(const Object&o){
        count++;
    }
};
#endif