#include<iostream>
using namespace std;
int main(){
    int n , arr[100];

    cout<<"Enter a size of arrays :";
    cin>>n;
    for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    for(int i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i]=arr[n-1-i];
        // arr[n]=arr[i];
        arr[n-1-i]=temp;
        cout<<arr[i]<<" "<<arr[n-1-i]<<"\n";
    }
     for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

    return 0;
}