#include<iostream>
using namespace std;
  int main(){

    int i,j;

    for(i=1; i<=5; i++){    //row
        for(j=1; j<=5; j++){  //column
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
  }