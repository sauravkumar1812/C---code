#include<iostream>
using namespace std;
int max(int a,int b,int c){
    if (a>b){
        if(a>c){
            return a;
        }
        else {
            return c;
        }
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}
int min(int a,int b,int c){
    if(a<b){
        if(a<c){
            return a;
        }
        else{
            return c;
        }
    }
    else if(b<c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three number for check :"<<endl;
    cin>>a>>b>>c;
    cout<<"max:"<<max(a,b,c)<<endl;
    cout<<"min:"<<min(a,b,c);
    return 0;
}