#include<iostream>
using namespace std;
int main(){
    int num,fact=1,n;
    cout<<"Enter a number = ";
    cin>>num;
    n=num;
    while (num!=0)
    {
     fact=fact*num;
num=num-1;
    }
    cout<<"Factorial of number ="<<fact;
    return 0;
}