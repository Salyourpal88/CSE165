#include <iostream>
#include <vector>
#include <string>
#include <cctype> 
#include <cstring>

using namespace std;

main(){
    string word;
    char character;
    vector<string> words;
    vector<string> letter;
    vector<char> Upper1;
    cin >> word;
    while(word != "quit"){
        if(word.length() == 1){
            letter.push_back(word);
            character = toupper(word[0]);
            Upper1.push_back(character);
        }
        words.push_back(word);
        cin >> word;
    }
    for(int i = 0; i < letter.size(); i++){
        for(int j = 0; j < words.size(); j++){
            if((letter[i].front() == words[j].front() ||Upper1[i] == words[j].front()) && letter[i] != words[j]){
                cout << words[j] << " ";
            }
        }
    }
    cout << endl;
}