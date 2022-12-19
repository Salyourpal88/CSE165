#include <iostream>
#include <fstream>
#include <string>
using namespace std;

    string letters;
    int num;

int main (){
    ifstream infile;
    infile.open("words.txt");
    while(infile >> letters){ 
        num++;
    }
    cout << "Word Count:" << num << endl;
}

