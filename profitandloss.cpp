#include<iostream>
using namespace std;
int main(){
    int sp,cp,profit,loss;
    float profitpercentage,losspercentage;
    cout<<"Enter sellprice ="<<"Enter costprice ="<<endl;
    cin>>sp>>cp;
    if(sp>cp){
        profit =sp-cp;
        cout<<"profit="<<profit<<endl;
        profitpercentage =((sp-cp)*100)/cp;
        cout<<"profitpercentage ="<<profitpercentage;
    }
else{
      loss = cp-sp;
    cout<<"loss="<<loss<<endl;
     losspercentage =((cp-sp)*100)/cp;
        cout<<"losspercentage ="<<losspercentage;
}
return 0;
}