#include<iostream>
using namespace std;
void func(int n){
     for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int s=1;s<=(2*n)-(2*i);s++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
   for(int i=n;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    for(int s=1;s<=(2*n)-(2*i);s++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    cout<<endl;
   }
}
int add (int , int );
int main(){
   int n;
   cin>>n;
   func(n);
   cout<<endl;
   func(10);

   cout<<endl;
   cout<<add(5,10);
   int result = add(20,25);
   cout<<endl;
   cout<<result<<"\n";
   int a , b;
   cout<<"input a and b \n";
   cin>>a>>b;
   cout<<add(a,b);


 
    return 0;
}

int add(int a , int b){
    int sum = a+b;
    return sum;
}