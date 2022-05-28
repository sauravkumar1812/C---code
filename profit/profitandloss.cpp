#include<iostream>
using namespace std;
int main(){
    int sp,cp,profit,loss;
    cout<<"Enter sellprice ="<<"Enter costprice ="<<endl;
    cin>>sp>>cp;
    if(sp>cp){
        profit =sp-cp;
        cout<<"profit="<<profit;
    }
else{
      loss = cp-sp;
    cout<<"loss="<<loss;
}
return 0;
}