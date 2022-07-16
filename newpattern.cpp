#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"*"<<endl;
     for(int i =1;i<=n;i++){
     for(int j =1;j<=n;j++){
         }
         cout<<"*";
         for (int j=1;j<=i;j++){
            cout<<j;
         }
          
         for(int j=i-1;j>=1;j--){
            cout<<j;
         }
         cout<<"*";
         cout<<endl;
        
     }
      
      for(int i =n;i>0;i--){
   cout<<"*";
         for (int j=i;j<0;j--){
            cout<<j;
         }
        
         for(int j=i-1;j>=1;j--){
            cout<<j;
             
         }
        cout<<"*";
         cout<<endl;
     }
     
    return 0;
}