#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter size of arrays :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n-1;j++){
        for(int k=0;k<(n-j-1);k++){
            if(arr[k]>arr[k+1]){
              int   temp=arr[k];
                arr[k]=arr[k+1];
                arr[k+1]=temp;
            }
        }
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}
