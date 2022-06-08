//prime number in nestedd loop
#include<iostream>
using namespace std;
int main () {
    int i=1,n=300;
    bool flag;
    for(i=2;i<=n;i++){
    if(i%n==0){
        flag=1;
    break;}
    if(flag==0){
        cout<<"Prime number : "<<i<<endl;
    }
    }
    return 0;
}