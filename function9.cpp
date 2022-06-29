#include<iostream>
using namespace std;
int factorial(int a){
    int fac=1;
    if(a==0 ||a==1)
        return fac;
    for(int i=1;i<=a;i++)
        fac=fac*i;
        return fac;
    }
int main(){
    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;
   cout<<factorial(a);
    return 0;
}