#include<iostream>
using namespace std;
int main(){
    int i,j,n;

    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        //for space
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //for number
        for(j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}