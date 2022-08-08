#include<iostream>
using namespace std;
int main(){
    int n,arr[100],d;
     cout<<"Enter size of an arrays :";
    cin>>n;
     cout<<"Enter displace size :";
    cin>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    int p=1;
    while(p<=d){
        int temp=arr[0];
        for(int i=0;i<(n-1);i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;
        p++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}