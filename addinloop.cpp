#include<iostream>
using namespace std;
int main(){
    int num,sum;
    sum = 0;
cout<<"Enter a possitive number"<<endl;
cin>>num;
for(int i=1;i<=num;i++){
    sum +=i;
}
cout<<"sum ="<<sum<<endl;
return 0;
}