#include <iostream>
#include <string>
#include "Sortable.h"

using namespace std;

int main(int argc, const char * argv[]){
    Sortable <int> N (5, 6, 7, 8);
    N.sort();
    Sortable <char> L ();
    L.sort();
    Sortable <string> S();
    S.sort();
}