#include<iostream>
using namespace std;
void  age(int a){
    if(a >=18){
        cout<<"He/She is elligible for vote "<<endl;
    }
    else{
        cout<<"He/She is not elligible for vote "<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter your age :"<<endl;
    cin>>a;
    age(a);
    return 0;
}