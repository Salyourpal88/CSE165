#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype> 
#include <cstring>

using namespace std;

main(){
    int num = 15;
    int neg = 0;
    int total = 0;
    vector<int> numbers;
    while(num != 0){
        cin >> num;
        if(num > 0){
            numbers.push_back(num);
        }
        if(num < 0){
            num = abs(num);
            numbers.erase(remove(numbers.begin(), numbers.end(), num), numbers.end());
        }
    }
    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
        total += numbers[i];
    }
    cout << total << endl;
}