#include<iostream>
using namespace std;
int fac(int num){
    if (num==0){
        return 0;
    }
    int ans=1;
    for(int i=1;i<=num;i++){
        ans *= i;
    }
    return ans;
}
void fac1(int num){
    for(int i=1;i<=num;i++){
        cout<<i;
        if (i!=num){
            cout<<"*";
        }
    }
}
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    fac1(num);
    cout<<endl;
    cout<<fac(num);
    return 0;
}