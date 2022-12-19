#ifndef LA4_Animal_h
#define LA4_Animal_h
#include <iostream>

using namespace std;

class Animal {
public:

    static int count;
    
    Animal(){
        cout << "Creating Generic Animal" << endl;
        count++;
    }

    ~Animal(){
        cout << "Deleting Generic Animal" << endl;
    }  
};

#endif