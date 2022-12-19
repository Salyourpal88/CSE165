#include <iostream>
#include "Rect.h"

using namespace std;

int main(int argc, const char * argv[]){
    int z = 0;
    float a, b, c, d, x, y;
    int track = 0;
    bool w;
    vector<bool> truth;
    vector<Rect*> list;
    while(z != 1){
        cin >> a >> b >> c >> d;
        if(a < 0 && b < 0 && c < 0 && d < 0){
            z++;
            break;
        }
        if(c < d){
            swap(c,d);
        }
        Rect* t = new Rect(a, b, c, d);
        list.push_back(t);
    }
    while (x != -99 && y != -99){
        cin >> x >> y;
        if(x == -99 && y == -99){
            break;
        }
        for(int i = 0; i < list.size(); i++){
            if (list[i] -> contains(Vec(x, y))){
                w = true;
                truth.push_back(w);
            } 
            else{
                w = false;
                truth.push_back(w);
            }
        }
    }
    for(int i = 1; i <= truth.size(); i++){
        if(truth[i-1] == 1){
            cout << "in ";
        }
        else{
            cout << "out ";
        }
        if(i % list.size() == 0){
            cout << endl;
        }
    }
}