#include<iostream>
using namespace std ; 
int main(){
    int a , b , c; 
    cout<<"First number : " ; 
    cin>> a ; 
    cout<<"Second number : " ; 
    cin>> b ; 
    cout<<"Third number : " ; 
    cin>> c ; 
    
    if(a > b && a > c) cout<<"a is the biggest number";
    else if(b > a && b > c) cout<<"b is the biggest number";
    else cout<<"c is the biggest number";
    
}