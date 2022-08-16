#include<iostream>
using namespace std;
int main(){
    int n,arr[100];
    cout<<"Enter size of an arrays :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int j=1;j<n;j++){
        int curr=arr[j];
        int k=j-1;
        while(arr[k]>curr && k>=0){
             arr[k+1]=arr[k];
             k--;
        }
        arr[k+1]=curr;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}