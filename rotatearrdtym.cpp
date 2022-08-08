#include<iostream>
using namespace std;
int main(){
    int n,arr[100],d;
    cout<<"Enter size of an array :";
    cin>>n;
     cout<<"Enter displace of an array :";
    cin>>d;
    int temp[d]={0};
     for(int j=0;j<n;j++){
        cin>>arr[j];
    }
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int k=0;k<(n-d);k++){
        arr[k]=arr[k+d];
    }
    int a = 0;
    for(int s=(n-d);s<n;s++){
        arr[s]=temp[a];
        a++;
    }
 for(int j=0;j<n;j++){
        cout<<arr[j];
    }

    return 0;
}