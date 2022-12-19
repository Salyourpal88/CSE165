#include <iostream>
#include "Dog.h"
#include "Animal.h"
#include "display.h"

using namespace std;

int main(int argc, const char * argv[]){
    vector<Animal*> list;
    int N, age;
    char letter;
    string name;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> letter >> name >> age;
        if(letter == 'A'){
            Animal* t = new Animal();
            t -> setName(name);
            list.push_back(t);
        }
        if(letter == 'D'){
            Dog* t = new Dog(name, age);
            list.push_back(t);
        }
    }
    display(list);
}