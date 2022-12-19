#ifndef LA6_Derived_h
#define LA6_Derived_h
#include "ADT.h"

using namespace std;

class Derived : public ADT{
    public:
    void doSomething(){
        cout << "I did something" << '\n';
    }
    void doSomethingElse(){
        cout << "I did something else" << '\n';
    }
    void dontDoThis(){

    }
};

#endif