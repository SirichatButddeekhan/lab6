#include<iostream>
using namespace std;

int main(){
    int i=0;
    int n[100];
    int Even=0;
    int Odd=0;
    while(true){
        cout << "Enter an integer: ";
        cin >> n[i];

        if(n[i] == 0){
            break;
        }
        if(n[i]%2 == 0){
            Even += 1;
        }
        else{
            Odd ++;
        }
        i++;
    }
    
    cout << "#Even numbers = " << Even;
    cout << "#Even numbers = " << Odd;
    
    
    return 0;
}