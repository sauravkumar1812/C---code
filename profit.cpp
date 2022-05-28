#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    float profitpercentage;
    cout<<"Enter sp="<<"Enter cp="<<endl;
    cin>>sp>>cp;
    profitpercentage=((sp-cp)*100)/cp;
    cout<<"profitpercentage="<<profitpercentage<<endl;
    return 0;
}