#include<iostream>
using namespace std;
int main(){
    int arr[100],n,key=18;
    cout<<"Enter the number of array elements  :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s= 0;
    int e=n;
    // int m;
    while(s<=e){
       int m = (s+e)/2;
        if (arr[m]==key){
        cout<<"KEY :"<<m<<endl;
       break;
        }
       else if(key<arr[m]){
        e=m-1;
       }
       else if(key>arr[m]){
        s=m+1;
       }
    }
    
return 0;
}