// Write a program that will take input of your name and age 
// and return whther you are adult or not
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter your name: "<<endl;
    string name;
    cin>>name;
    int age=0;
    while(age<=0){
        cout<<"Enter your age: "<<endl;
        cin>>age;
        if(age>18){
            cout<<name<<" is adult"<<endl;
        }
        else if(age<=0){
            cout<<"invalid age"<<endl;
        }
        else{
            cout<<name<<" is not adult"<<endl;
        }
    }
    return 0;
}