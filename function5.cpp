#include<iostream>
using namespace std;
void num(int a){
    if (a%2==0){
        cout<<"The number you given is even"<<endl;
    }
    else{
        cout<<"The number you given is odd"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter a number for check even or odd :"<<endl;
    cin>>a;
    num(a);
    return 0;
}