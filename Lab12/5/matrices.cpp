#include <iostream>
#include "Vec.h"
using namespace std;
int Mat::Identity = 1;

int main(int argc, const char * argv[])
{
    Mat a ( Mat::Identity);
    Mat b ( 1.0f, 2.0f, 1.0f, 4.0f );
    
    
    Vec v = Vec(1,2)*(((a + b) - (4*a)) + a*b);
    cout << v<<endl;
    return 0;
}
