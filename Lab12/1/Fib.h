#include <iostream>

using namespace std;
class Fib{
    public:
    static int last;
    static int secondLast;
    int next(){
        secondLast = last + secondLast; 
        if(secondLast != 1){
            last = secondLast - last;
        }       
        return secondLast;              
    }
    int next(bool x){
        if(x == true){
            secondLast = 0;
            last = 1;
            secondLast = last + secondLast;
            return secondLast;
        }
        else{//nothing
            return secondLast;
        }
    }
};