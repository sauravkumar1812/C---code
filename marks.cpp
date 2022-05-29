#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    if (n>95){
        cout<<"Excellent"<<endl;
    }
    else if(n>75){
        cout<<"Better"<<endl;
    }
    else {
        cout<<"good"<<endl;
    }
    return 0;
}