#include<iostream>
#include <string>
using namespace std;

int main(){
    
    int num = 1,even = 0 ,odd = 0;
    
    while(num != 0){
        
        cout << "Enter an integer: ";    
        cin >> num ;
        
        if(num%2 == 0){
            even++ ;
        }
        else{
            odd++ ;
        }
        
    }
    even-- ;
    
    cout << "#Even numbers = " << even ;
    cout << "\n#Odd numbers = " << odd ;
    return 0;
}
