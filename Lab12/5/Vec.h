#ifndef LA12_Vec_h
#define LA12_Vec_h
#include "Mat.h"
using namespace std;

class Vec {
public:
    float x;
    float y;

    Vec(){
        x = 0;
        y = 0;
    }
    
    Vec (float x, float y){
        this->x = x;
        this->y = y;
    }
    
    Vec operator + (const Vec & v) const{
        return Vec(x + v.x, y + v.y);
    }

    Vec operator - (const Vec & v) const{
        return Vec(x - v.x, y - v.y);
    }
    
    //change this
    Vec operator * (Mat mat){
        Vec v;
        v.x = x * mat.q + y * mat.e;
        v.y = x * mat.w + y * mat.r;
        return v;
   }
};

ostream& operator<< (ostream& o, const Vec & v){
    o << "(" << v.x << ", " << v.y << ")";
    return o;
}

#endif