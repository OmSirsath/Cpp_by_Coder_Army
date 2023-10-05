#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    char name;

    cout<<"Enter the value of n :"<<endl;
    cin>>n;

    for(i=1; i<=5; i++){
        for(j=1; j<=5-i; j++){
            cout<<"  ";
        }
        for(name='A'; name<='A'+(i-1); name++){
            cout<<name<<" ";
        }
        cout<<endl;
    }

    return 0;
}