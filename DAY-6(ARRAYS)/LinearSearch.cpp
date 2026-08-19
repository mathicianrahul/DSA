#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){

        if(arr[i]==key){
            cout<<"Element Found At Index: ";
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[]={2,1,52,1,45,56,25,2,32,65,59,45,85};
    int n=sizeof(arr)/sizeof(int);

    cout<<linearSearch(arr, n, 59)<<endl;
    return 0;

}