#include<iostream>
using namespace std;
int main(){
    int n,i;
    int sum=0;
    
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    for(i=1; i<=n; i++){
        sum+=i*i;
    }
    cout<<"Sum of square of first "<< n <<" "<<"natural number"<< sum<<endl;
    return 0;
}