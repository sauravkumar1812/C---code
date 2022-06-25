#include<iostream>
using namespace std;
void max(int ,int);
int big(int ,int);
int main(){
    int a,b;
    cout<<"Enter two number a and b :"<<endl;
    cin>>a>>b;
    max(a,b);
    cout<<"max= "<<big(a,b);
    return 0;

}
int big(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

void max(int a,int b){
if (a>b){
    cout<<a;
}
else{
    cout<<b;
}}