#include<iostream>
using namespace std;
int main(){
    int max=INT_MIN,min=INT_MAX,n;

    cout<<"Enter size of arrays :";
    cin>>n;
    int arr[100];
    cout<<"Enter the element of arrays:"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
cout<<"Max element ="<<max<<endl;
cout<<"Min element ="<<min<<endl;
    return 0;
}