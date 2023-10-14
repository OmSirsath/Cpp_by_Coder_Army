#include<iostream>
using namespace std;
int main(){

    int age;

    cout<<"Enter the value of age :"<<endl;
    cin>>age;

    if(age<12 || age>65){
        cout<<"yes,It is eligible"<<endl;
    }
    else{
        cout<<"No, It is eligible";
    }
    return 0;

}