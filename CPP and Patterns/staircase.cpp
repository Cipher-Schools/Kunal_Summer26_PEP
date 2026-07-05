#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<2;j++){
    //         for(int k=0;k<i+1;k++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    // }
    for(int i=1;i<=n;i++){
        int stars=(i%2==1)? i+1:i;
        for(int j=0;j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}