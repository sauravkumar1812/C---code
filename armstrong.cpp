#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=1,orignalnumber=n;

    while(n<=500){
      int sum =0;
      int temp= n;
       while(temp!=0){ 
         int lastdigit=temp%10;
        sum=sum+pow(lastdigit,3);
        temp=temp/10;
        }
  
    if(n==sum){
    cout<<"Armstrong number :"<<endl<<sum<<endl;
   
    }
        n++;
    
    }
    return 0;
}
    
