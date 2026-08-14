#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter The Number";
    cin>>a;

    if (a>0){
        cout<<"the"<<a<<"is Positive Number"<<endl;
    } else if(a==0){
         cout<<"The Number is niether -ve, niether +ve ";
    } else{
        cout<<"The " <<a<<" "  <<" is -ve Number"<<endl;
        
    }
    return 0;
}