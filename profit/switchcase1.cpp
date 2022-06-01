#include<iostream>
using namespace std;
int main(){
    int i=1,j=1;
    for(;;){
        if(i>5)
        break;
        else
        j=j+i;
        cout<<j<<endl;
        i=i+j;
    }
    return 0;
}