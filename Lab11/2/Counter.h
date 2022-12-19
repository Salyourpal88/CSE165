#include <iostream>

using namespace std;
class Counter{
    public:
    int ID;
    static int count;
    Counter() : ID(count++) {
        cout << ID << " created" << '\n';
    }
    ~Counter() {
        cout << ID << " destroyed" << '\n';
    }

    void* operator new (size_t space){
        cout << "new" << '\n';
        return malloc(space);
    }
    void operator delete(void* temp){
        cout << "delete" << '\n';
        free(temp);
    }
};