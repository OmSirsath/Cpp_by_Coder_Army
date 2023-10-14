#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the value of a & b :"<<endl;
    cin>>a>>b;

    if(a>b){
        cout<<a<<"It is bigger";
    }
    else if(b>a){
        cout<<a<<"It is smaller";
    }
     
    else{
        cout<<"It is equal number";
    }
    return 0;
}