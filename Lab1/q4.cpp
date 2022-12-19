#include <string>
#include <iostream>
#include <fstream>
#include <algorithm> 
#include <string>

using namespace std;

string convert_toupper(string& fileword){
    transform(fileword.begin(), fileword.end(), fileword.begin(), ::toupper);
    return fileword;
}

string Elim_punc(string& fileword){
    for (int i = 0; i < fileword.length(); i++) {
        if(fileword[i] == '.' || fileword[i] == ',' || fileword[i] == '?'){
            fileword.pop_back();
    }
    }
    return fileword;
    }

int main(){
//Gets word from user to search
string find, fileword;
cin >> find;
int count;

//Makes them all uppercase for later comparison
transform(find.begin(), find.end(), find.begin(), ::toupper);

//access the file
ifstream occur("words.txt");
//Goes through each string
while(occur >> fileword){
    //streamlines each word for comparisons, also removes punctuation for easier comparisons
    convert_toupper(fileword);
    Elim_punc(fileword);
    //if the word searching is the same word it is on then add to count
    if(fileword == find){
        count++;
        }
        }
        //finally the count
        cout << count;
}