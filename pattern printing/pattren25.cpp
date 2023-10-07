#include<iostream>
using namespace std;
int main(){
         int i,j,n;

         cout<<"Enter the value of n :"<<endl;
         cin>>n;


         for(i=1; i<=n; i++){
            //print *
            for(j=1; j<=i; j++){
                cout<<"* ";
            }
            //print space
            for(j=1; j<=2*n-2*i; j++){
                cout<<"  ";
            }
            //print *
            for(j=1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
         }


         for(i=n-1; i>=1; i--){
            for(j=1; j<=i; j++){
                cout<<"* ";

            }
            for(j=1; j<=2*n-2*i; j++){
                cout<<"  ";
            }
            for(j=1; j<=i; j++){
                cout<<"* ";
            }
             cout<<endl;
         }
    return 0;
}