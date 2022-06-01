#include<iostream>
using namespace std;
int main(){
    int y;
    float x,i;
    cout<<"i"<<"\t"<<"y"<<"\t"<<"x"<<endl<<endl;
    for(y=1;y<=6;y++){
        for(x=5.5;x<=12.5;x=x+0.5){
            
            float i;
            i = 2 + ( y + 0.5*x ) ;
         
            cout<<i<<"\t"<<y<<"\t"<<x<<endl;     
                }

        }
    return 0;
}