#include<iostream>
using namespace std ; 
int main(){
    int number ; 
    cout<<"Enter the number : " ; 
    cin>> number;
    if(number % 2 != 0){
        cout<<number<<" is odd";
    }
    else{
        cout<<number<<" is not odd";
    }
}