// floyed'sTriaglePatternCharacterversion.cpp

// #include<iostream>
// using namespace std;
// int main(){
//     int n= 4;
//     char ch = 'A';

//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<< ch << " ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//O/P:
// A
// B C  
// D E F
// G H I J

#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch = 'A';

    for(int i=0; i<n; i++){

        for(char j=ch+i; j>=ch; j--){
            cout << j <<" ";

        }
        cout<<endl;
    }
    return 0;
}

// }
//O/P:
//A
//B A
//C B A
//D C B A

// #include <iostream>
// using namespace std;
// int main() {
//     int n=4;
//     int ch = 1;

//     for(int i=0; i<n; i++){

//         for(int j=i+1; j>=ch; j--){
//             cout<<j<<" ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// op:
// 1
// 21
// 321
// 4321
// 
// 
// 