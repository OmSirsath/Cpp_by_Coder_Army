#include<iostream>
using namespace std;
int main(){
    int fact=1,n,i;

    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    for(i=1; i<=n; i=i+1){
        fact=fact*i;
    }
    cout<<fact;
    
    return 0;
}