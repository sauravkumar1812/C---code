#include<iostream>
using namespace std;
int main(){
    int num;
   int sum =0;
    cout<<"Enter a number"<<endl;
    cin>>num;
    while(num>=0){
        sum += num;
        cout<<"Enter a number"<<endl;
        cin>>num;
    }
    cout<<"sum"<<sum<<endl;
}