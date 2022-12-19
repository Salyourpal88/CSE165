#include <iostream> 

using namespace std;

void Binary_Turbo(int num){
    int alen = num;
    int size = 0;
    while(alen > 0){
        alen = alen / 2;
        size++;
    }

    int reverse[size];
    int forward[size];
    int i = 0;
    int length = 0;
    
    while(num > 0){
        reverse[i] = num % 2;
        i++;
        num = num / 2;
    }

    for(int z = i - 1; z >= 0; z--){
        forward[length] = reverse[z];
        length++;
    }

    for(int y = 0; y <= i - 1; y++){
        cout << forward[y];
    }
}

main(){
    int num;
    char hexadecimal[8];
    cin >> num;
    while(num != -1){
        if(num >= 0){
            sprintf(hexadecimal, "%X", num);
            cout << hexadecimal << '\n';
            Binary_Turbo(num);
            cout << '\n';
        }
        else{
            //Do Nothing 
        }
        cin >> num;
    }
}