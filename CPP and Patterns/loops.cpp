#include <iostream>
using namespace std;
int main(){
    // while(true){
    //     int n;
    //     cout<<"Enter your choice: "<<endl;
    //     cin>>n;
    //     if(n==2){
    //         cout<<"stopped"<<endl;
    //         break;
    //     }//break statement takes you out of the loop
    //     continue;
    // }

    // create a program that prints to n 
    // and skips every multiple of 3 and 5 using continue statement
    for(int i=0;i<10;i++){
        if(i%3==0)continue;
        cout<<i<<endl;
    }
    return 0;
    // create a program that asks for user input and keeps 
    // till it is not 2
}