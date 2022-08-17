#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        if(arr[j]==1){
            arr[j]=0;
        }
        else{
            arr[j]=1;
        }
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
