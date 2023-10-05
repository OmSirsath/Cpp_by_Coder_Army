#include<iostream>
using namespace std;
int main(){
    int i,j,n,k;

    cout<<"Enter the value of n;"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        //space print
        for(j=1; j<=n-i; j++){
            cout<<"  ";
        }
        //1 to row
        for(j=1; j<=i; j++){
           cout<<j<<" ";
        }  
        //row -1 to row
        for(j=i-1; j>=1;j--){
            cout<<j<<" ";
           }
           cout<<endl;

    }
    return 0;
}