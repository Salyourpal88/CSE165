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
};