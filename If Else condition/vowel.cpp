#include<iostream>
using namespace std;
int main(){
    // char ch;
    // cout<<"Enter the any character :"<<endl;
    // cin>>ch;

    // if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='0'|| ch=='u'){
    //     cout<<"It is vowel";
    // }
    // else{
    //     cout<<"It is consonant";
    // }
//-------------------------------------------------------------
    int num;

    cout<<"Enter the number :"<<endl;
    cin>>num;

    if(num==1){
        cout<<"monday";
    }
    else if(num==2){
        cout<<"tuesdsay";
    }
     else if(num==3){
        cout<<"wednesday";
    }
     else if(num==4){
        cout<<"thusday";
    }
     else if(num==5){
        cout<<"friday";
    }
     else if(num==6){
        cout<<"saturday";
    }
     else if(num==7){
        cout<<"sunday";
    }

    else{
        cout<<"Enter valid day";
    }
    return 0;
}