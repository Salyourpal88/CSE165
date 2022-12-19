#include <iostream>
using namespace std;

template<typename t>
class DynArray{
public:
    int area;
    t * array;
    DynArray(){
        area = 0;
        array = new t[area];
    }
        
    void add(t val){
        t * storage = new t[area + 1];
        for(int i = 0; i < area; i++){
            storage[i] = array[i];
        }
        storage[area] = val;
        array = storage;
        area++;
    }
        
    t operator[](int value){
        return array[value];
    }
};