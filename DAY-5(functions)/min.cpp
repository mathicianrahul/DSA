#include<iostream>
using namespace std;

int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}


int main(){
    cout<<"The Minimum Number Is:"<<minOfTwo(5,4)<<endl;
}