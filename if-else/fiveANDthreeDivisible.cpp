#include<iostream>
using namespace std ; 
int main(){
    int number ; 
    cout<<"Enter the number : " ; 
    cin>> number;
    if(number % 3 == 0 && number % 5 == 0){
        cout<<"Yes this number is divisible 3 and 5";
    }
    else{
        cout<<"No not possible" ;
    } 
}