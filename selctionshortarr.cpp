#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter size of arrays :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        for(int k=(j+1);k<n;k++){
            if(arr[j]>arr[k]){
            int temp =arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}