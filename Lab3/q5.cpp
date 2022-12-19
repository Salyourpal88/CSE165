#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

int main(){
    string word;
    vector<string> vec1;
    cin >> word;
    while(word != "quit"){
        if(word.length() > 10){
        }
        else{
            vec1.push_back(word);
        }
        cin >> word;
    }
    
    for(int i = 1; i < 10; i++){
        int ln = 0;
        int total = 0;
        for(int j = 0; j < vec1.size(); j++){
            if(vec1[j].length() == i){
                ln++;
                total = total + vec1[j].length();
            }
            if(ln > 0 && vec1.size() - 1 == j){
                cout << total << " " << ln << endl;
            }
        }
    }
}