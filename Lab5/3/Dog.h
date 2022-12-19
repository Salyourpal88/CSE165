#ifndef Dog_h
#define Dog_h
#include "Animal.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Dog: public Animal{
public:
Dog(string x, int a){
    setName(x);
    cout << "Creating Dog" << endl;
    setAge(a);
}

void feed(){
    cout << "A small bone, please!" << endl;
}
};

#endif