#include<iostream>
using namespace std;
int main(){
    int n;
  int  count=0;
    cin>>n;
    for(int i=1;i<=n;i++){
      for  (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=(i+count);k++){
            cout<<"* ";
        }
        count++;
        cout<<endl;
    }
    return 0;
}