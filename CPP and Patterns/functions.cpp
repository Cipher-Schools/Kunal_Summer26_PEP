#include <bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}
int subtract(int a,int b){
    return a-b;
}
int naturalsum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
bool Isprime(int n){
    for(int i=2;i<n/2;i++){
        if(n%i==0)return false;
    }
    return true;
}

bool perfectsquare(int n){
    for(int i=0;i<n;i++){
        if(i*i==n)return true;
    }
    return false;
}


void changes(int n){//Pass by value
    n=10;
}
void change(int &a){//Pass by reference
    a=3;
}
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){  
    // int a=5;
    // int b=4;
    // swap(&a,&b);
    // cout<<"after swapping the value is: "<<a<<" "<<b;
    // return 0;
    // int *p=NULL;
    // cout<<*p;//when we tries to access a null pointer we will get segmentation fault
    char c='a';
    void *p= &c;
    cout<<*((*char)p);

    // create a function to perform swap using pointers
}

