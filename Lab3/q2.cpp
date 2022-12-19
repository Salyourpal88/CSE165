#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
#include <cstring>

using namespace std;

main(){
string letter;
vector<int> numbers;
vector<string> letters;
int num = 0;

while(num != -2){
    cin >> letter;
    letters.push_back(letter);
    cin >> num;
    numbers.push_back(num);
}

for(int i = 0; i < letters.size(); i++){ //h b a f
    if(numbers[i] == -1){                //3(hhh new line) -1(new line) 2(aa new line) -2(end)
        cout << endl; 
    }
    for(int j = 0; j < numbers[i]; j++){
        cout << letters[i];
        if (j == numbers[i] - 1){
            cout << endl;
        }
    }
}
}