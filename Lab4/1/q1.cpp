#include "Stash.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    Stash numbers;
    string num;
    int count;
    numbers.initialize(100);
    fstream file;
    file.open("input.txt", ios::in);
    while(getline(file, num)){
        double k = stod(num);
        numbers.add(&k);
    }
    cout << "Output: " << endl;
    for(int j = 0; j < numbers.count(); j++){
        cout << *(double*)numbers.fetch(j) << endl;
    }
    numbers.cleanup();
}