// replace duplicate in array to -1?
#include<iostream>
using namespace std;
int main(){
    int n , arr[100];
    cout<<"Enter size of an arrays :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
       if( arr[j]==arr[i])
       arr[j]=-1;
        }
 
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}