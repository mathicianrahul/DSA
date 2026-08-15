#include<iostream>
using namespace std;

int fact=1;
int Factorial(int n){
    for(int i=1; i<=n; i++){
        // fact=fact*n;
        fact*=i;
    }    
    return fact;
}

int main(){
    cout<<"The factorial is: "<< Factorial(5)<<endl;
    return 0;
}