#include <bits/stdc++.h>
using namespace std;

int findsum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    // Arrays
    // uses stack memory
    // int arr[8]={1,2,3,4,5,6,7,8};
    // Array using new operator
    // uses heap memory
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    vector<int> arr;
    // take input of n elements of a vector and print it.
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    // sort function in vector in increasing order
    sort(arr.begin(),arr.end());
    // to sort in decreasing order
    // sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<n;i++){
        cout<<"element at index "<<i <<" is "<<arr[i]<<endl;
    }
    // int sum=findsum(arr,n);
    // cout<<"Sum of array is "<<sum<<endl;
    return 0;
    // Write a program to take input from user 
    // and print the array and its sum
}