#ifndef Obj_h
#define Obj_h
#include <string>
#include "Shared.h"

using namespace std;

class Obj : public Shared{
    public:
    
        string jake;
    
        Obj(){}
        
        Obj(string call){
            this -> jake = call;
            cout << "New " << jake << '\n';
        }
    
        string n(){
            return jake;
        }
        
        ~Obj(){
            cout << "Delete " << jake << '\n';
        }
    
};

#endif