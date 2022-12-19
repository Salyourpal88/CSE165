#ifndef LA6_Data_h
#define LA6_Data_h
#include <algorithm>
#include <vector>

using namespace std;

class Data{
    public:
    vector <int> stack;
    int k;

    void add(int k){
        stack.push_back(k);
    }

    void print(){
        for(int i = 0; i < stack.size(); i++){
            cout << stack.at(i) << ' ';
        }
        cout << endl;
    }

    void Sort(){
        sort(stack.begin(), stack.end());
    }
};

#endif
