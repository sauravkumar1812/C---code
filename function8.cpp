#include<iostream>
using namespace std;
void marks(int a){
    if(a>=91 && a<=100){
        cout<<"AA"<<endl;
    }
    else if(a>=81 && a<=90){
        cout<<"AB"<<endl;
    }
    else if(a>=71 && a<=80){
        cout<<"BB"<<endl;
    }
    else if(a>=61 && a<=70){
        cout<<"BC"<<endl;
    }
    else if(a>=51 && a<=60){
        cout<<"CD"<<endl;
    }
    else if(a>=41 && a<=50){
        cout<<"DD"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
}
int main(){
    int a;
    cout<<"Enter the marks 1-100 :";
    cin>>a;
    marks(a);
    return 0;
}