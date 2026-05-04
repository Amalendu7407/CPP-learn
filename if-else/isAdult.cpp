#include<iostream>
using namespace std ; 
int main(){
    int age ; 
    cout<<"Enter your age to check you are eligible for vote or not  : ";
    cin>> age ; 
    if(age >= 18){
        cout<<"Yes , you are eligible";
    }
    else{
        cout<<"You are not eligible" ; 
    }
}