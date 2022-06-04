#include<iostream>
using namespace std;
int main(){
    int n;
  int  count=0;
  int c = 1;
    cin>>n;
    for(int i=1;i<=n;i++){
      for  (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int k=1;k<=(2*i)-1;k++){
            if(){
                cout<<--count<<" ";
            }
            else{
                cout<<++count<<" ";
            }
        }
        count++;
        c += 2;
        cout<<endl;
    }
    return 0;
}