#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <cctype> 
#include <cstring>


using namespace std;

int main(){
    string word;
    vector<string> vec1;
    cin >> word;
    char upper;
    string check;
    while(word != "quit"){
        if(word.length() > 3){
            vec1.push_back(word);
        }
        else{ 
            check = word;
            upper = toupper(check[0]);
        }
        cin >> word;
    }

    for(int i = 0; i < vec1.size(); i++){
        for(int j = 0; j < check.length(); j++){
            if(check[j] != vec1[i][j]){
                continue;
            }
            if(j == check.length() - 1){
                cout << vec1[i] << " ";
            }
        }
    }
    cout << endl;
}