#include<iostream>
using namespace std;
int main(){
    int n,arr[100];

    // int temp =arr[0];
    cout<<"Enter size of an arrays :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int temp = arr[0];
    for(int j=0;j<(n-1);j++){
        arr[j]=arr[j+1];
    }
    arr[n-1]= temp;
    for(int i=0;i<n-1;i++){
        cout<<arr[i];
    }
   cout<<arr[n-1];
    return 0;
}