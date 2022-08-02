#include<iostream>
using namespace std;
int main(){
    int n;
    bool found= false;
    cout<<"Enter no of arrays :";
    cin>>n;
    int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     } 
     int key=5;
     for(int i=0;i<n;i++)
     {
         if (arr[i]==key){
         
         cout<<i<<endl;
         found == true;
         break;}
     }
     
     if (found==false)
     cout<<"-1"<<endl;
     return 0;
}