#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <fstream>

using namespace std;

void printFrequencies(const string &letters){
    unordered_map<string, int> wordFreq;
    stringstream file(letters);
    string text;
    while (file >> text){
        wordFreq[text]++;
    }
    unordered_map<string, int>::iterator i;
    for (i = wordFreq.begin(); i != wordFreq.end(); i++){
        cout << "(" << i -> first << ", " << i -> second << "), " << '\n';
    }
}

int main(int argc, char** argv)
{

    std::ifstream ifs("file.txt");
    std::string content((std::istreambuf_iterator<char>(ifs)),(std::istreambuf_iterator<char>()));

    printFrequencies(content);

    return 0;
}