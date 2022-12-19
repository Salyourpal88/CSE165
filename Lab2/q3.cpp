#include <iostream> 

using namespace std;

bool Prime(int i){
    if(i == 0 || i == 1){
        return 0;
    }
    for(int j = 2; j < i; j++){
        if(i % j == 0){
            return 0;
        }
    }
    return 1;
}

main(){
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if (Prime(i) == 1){
            cout << i << endl;
        }
    }
}