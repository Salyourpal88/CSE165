#include <iostream> 

using namespace std;

main(){
int num;
cin >> num;
while(num != 0){
if(num > 0){
    cout << "POSITIVE";
}
else{
    cout << "NEGATIVE";
}
if(num % 2 == 0){
    cout << " EVEN" << '\n';
}
else{
    cout << " ODD" << '\n';
}
cin >> num;
}
}