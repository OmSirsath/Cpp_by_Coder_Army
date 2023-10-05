#include<iostream>
using namespace std;
int main(){

    // int i,j;
    //  int count =1;

    // for(i=1;i<=5;i++){
    //     for(j=1; j<=5; j++){
    //         cout<<count <<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }


    //---------------------------------------------------------

    int i,j;

    for(i=1;i<=5;i++){
        for(j=1; j<=5; j++){
            cout<<(i-1)*5+j<<" ";
        }
        cout<<endl;
    }
    return 0;
}