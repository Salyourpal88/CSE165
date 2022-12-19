#include "Stack.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    Stack numbers;
    string num;
    int count;

    numbers.initialize();

    fstream file;
    file.open("input.txt", ios::in);
    while(getline(file, num)){
        double k = stod(num);
        numbers.push(new double (k));
    }
    for(int i = 0; i < 4; i++){
    cout << *(double*)numbers.head->data << endl;
    numbers.head = numbers.head->next;
    //*(double*)numbers.pop();
    }
    numbers.cleanup();
    cout << endl;
}