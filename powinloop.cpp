#include<iostream>

using namespace std;
int main(){
    int b,a,result=1;
    
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    cout<<a<<"^"<<b<<"="<<endl;
    while(b!=0){
        result*=a;
        --b;
    }
    cout<<result<<endl;
    return 0;

}