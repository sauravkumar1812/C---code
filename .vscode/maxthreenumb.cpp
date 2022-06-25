#include<iostream>
using namespace std;
void max(int a,int b,int c){
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else if(b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}
void max(){
    cout<<"Hello";
}
int main(){
    int a,b,c;
    cout<<"Enter  three number for check max number :"<<endl;
    cin>>a>>b>>c;
    max(a,b,c);
  
    max();
    return 0;
}