#include<iostream>
using namespace std;
int main(){
    int pos,neg,zero,num;
    char ans='y';
    pos=neg=zero=0;
    while(ans=='y'||ans=='Y'){
        cout<<"Enter a number :";
        cin>>num;
        if(num==0)
        zero++;
        if(num>0)
        pos++;
        if(num<0)
        neg++;
        cout<<"Do you want to conitnue ?"<<endl;
        cin>>ans;    
    }
    cout<<"positive number :"<<pos<<endl;
    cout<<"negative number :"<<neg<<endl;
    cout<<"zero  :"<<zero<<endl;
    return 0;
}