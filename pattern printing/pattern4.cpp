#include<iostream>
using namespace std;
int main(){
    int i,j;

    for(i=1; i<=10;i++){  //row
        for(j=1; j<=10; j++){  //colunm
            cout<<j*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}