#include<iostream>
using namespace std;
int main(){

    // int i,j;

    // for(i=1; i<=5;i++){  //row
    //     for(j=1; j<=5; j++){  //colunm
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    //----------------------------------------------------------

    int i,j;

    for(i=1; i<=5;i++){  //row
        for(j=5; j>=1; j--){  //colunm
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}