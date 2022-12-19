#include <iostream>
#include "Data.h"

int main(int argc, const char * argv[])
{
    Data myData;
    
    myData.add(4);
    myData.add(5);
    myData.add(2);
    myData.add(3);
    myData.add(1);
    
    myData.print();
    
    myData.Sort();
    
    myData.print();
    
    return 0;
}