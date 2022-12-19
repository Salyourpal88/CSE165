#include <iostream> 

using namespace std;

int getBit(int n, int index){
    return ((n & (1 << index)) != 0);
}

int setBit(int n, int index, int pos){
    if(pos == index){
    return 1;
    }
    return ((n & (1 << index)) != 0);
}

int clearBit(int n, int index, int pos){
    if(pos == index){
    return 0;
    }
    return ((n & (1 << index)) != 0);
}

main(){
    int n = 0; 
    int index = 0;
    int size = 0;

    cout << "Consider input number n = ";
    cin >> n;
    cout << "And index = ";
    cin >> index;

    int length = n;
    while(length > 0){
        length = length / 2;  
        size++;
    }

    cout << "Binary representation of " << n << " is: ";
    for(int back = size; back >= 0; back--){    
        cout << getBit(n, back);
    }
    cout << endl << "Get Position at "<< index << ": " << getBit(n, index) << endl;

    cout << "Binary representation after setting bit at position " << index << ": ";

    for(int back = size; back >= 0; back--){    
        cout << setBit(n, back, index);
    }
    cout << '\n'; 
    cout << "Binary representation after clearing bit at position " << index << ": "; 
    
    for(int back = size; back >= 0; back--){    
        cout << clearBit(n, back, index);
    }
    
    cout << '\n';
}

