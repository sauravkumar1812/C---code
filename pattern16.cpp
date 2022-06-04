
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"N :";
    cin>>n;
   
    int count=-0;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=count;j++){
            cout<<"  ";

        }
        for(int k=1;k<=(2*n-1);k++){
            cout<<"*";
        }
        cout<<endl;
        count++;
        
    }
    return 0;
}