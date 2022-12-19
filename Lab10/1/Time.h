#include <iostream>

using namespace std;
class Time{
    public:
    int x, y, z;
    Time(){
    }
    Time(int x, int y, int z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    Time operator + (Time const &span){
        Time Space;
        Space.x = x + span.x;
        Space.y = y + span.y;
        while(Space.y > 60){
            Space.y = Space.y - 60;
            Space.x = Space.x + 1;
        }
        Space.z = z + span.z;
        while(Space.z > 60){
            Space.z = Space.z - 60;
            Space.y = Space.y + 1;
        }
        return Space;
    }
    void print(){
        cout << x << " hours, " << y << " minutes, " << z << " seconds" << '\n';
    }
};