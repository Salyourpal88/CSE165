#include <iostream>

using namespace std;
class Counter{
    public:
    int ID;
    static int count;
    static int temp;
    Counter() : ID(count++) {
    }
    ~Counter(){
    }

    void* operator new[] (size_t heap){
        cout << "new " << heap/sizeof(Counter)+1 <<" counters starting at " << count << '\n';
        return malloc(heap);
    }
    void operator delete[](void* temp){
        cout << "delete counters" << '\n';
        free(temp);
    }
};