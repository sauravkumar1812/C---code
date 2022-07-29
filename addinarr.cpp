#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout<<"Enter no of arrays :";
    cin>>n;
int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     } 
       cout<<" The elements of array :"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
     } 
     cout<<endl;
     for(int i=0;i<n;i++){
        sum +=arr[i];
       
     } 
 cout<<"sum = "<<sum;
 return 0;
}