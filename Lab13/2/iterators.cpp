#include <iostream>
#include <math.h>

#include "DynArray.h"

using namespace std;

template <class A>
class Iterator
{
    int cur;
    A& arr;
public:
    Iterator(A& a) : cur(0), arr(a) {}
    void begin() {
        cur;
    }
    void end() {
        cur = arr.Return_Size();
    }
    bool atend() { 
        if(cur == arr.Return_Size()){
            return 1;
        } 
        else {
            return 0;
        }
    }
    void advance() {     
        if(!atend()){
            cur = cur + 1;
        }
    }
    void print() {
        cout << cur << " : " << arr[cur] << '\n';
    }
};

template <class A, class X>
void insert_four(A& a)
{
    for (int i = 0; i < 5; i++)
        a.add((X)(2.0*cos(double(i))));
};


int main(int argc, const char * argv[])
{
    DynArray<int> ia;
    insert_four<DynArray<int>, int>(ia);

    DynArray<float> fa;
    insert_four<DynArray<float>, float>(fa);

    { Iterator<DynArray<int>> it(ia);
    for (it.begin(); !it.atend(); it.advance()) it.print();
    }

    { Iterator<DynArray<float>> it(fa);
    for (it.begin(); !it.atend(); it.advance()) it.print();
    }

    return 0;
}