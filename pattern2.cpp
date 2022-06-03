#include<iostream>
using namespace std;
int main(){
    int rows,columns,i,j;
    cout<<"Enter the number of rows :";
    cin>>rows;
    cout<<"Enter the number of columns :";
    cin>>columns;
    for(i=1;i<=rows;i++){
         for(j=1;j<=rows;j++){
             if(i==1||i==rows||j==1||j==columns){
             cout<<"*";}
             else{
                 cout<<" ";
             }
    }
    cout<<endl;
}
return 0;
}