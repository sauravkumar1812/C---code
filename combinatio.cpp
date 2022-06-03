#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter number of rows :"<<endl;
    Cin>>rows;
    cout<<"Enter number of columns :"<<endl;
    Cin>>columns;
    cout<<rows<<endl<<columns<<endl;
    for(int i=1;i<=rows;i++){
        for( int j=1;j<=columns;j++){
            cout<<"*"<<" ";
        }
cout<<endl;
    }
    return 0;
}