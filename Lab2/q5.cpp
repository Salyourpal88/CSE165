#include <iostream> 

using namespace std;

void Multiply(int* num1, int* num2){
    cout << (*num1)*(*num2) << '\n';
}

void Add(int* num1, int* num2){
    cout << (*num1)+(*num2) << '\n';
}

void Subtract(int* num1, int* num2){
    cout << (*num1)-(*num2) << '\n';
}

void Divide(int* num1, int* num2){
    cout << (*num1)/(*num2) << '\n';
}

main(){
    int* num1 = new int;
    int* num2 = new int;
    cin >> *num1 >> *num2;
    cout << "Attempting to Multiply:" << '\n';
    Multiply(num1, num2);
    cout << "Attempting to Add:" << '\n';
    Add(num1, num2);
    cout << "Attempting to Subtract:" << '\n';
    Subtract(num1, num2);
    cout << "Attempting to Divide:" << '\n';
    Divide(num1, num2);
}