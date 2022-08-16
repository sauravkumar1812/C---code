#include<iostream>
using namespace std;
int main(){
    int n;
    char arr[100];
    bool flag =true;
    cout<<"Enter size of array :";
    cin>>n;
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int j=n-1;
    int i=0;
       while(i<=j){
        if (arr[i]!=arr[j]){
            flag = false;
            cout<<"Not palindrome !";
            break;
        }
        
        i++;
        j--;
       }
       if(flag==true){
        cout<<"Palindrome "<<endl;
       }
       return 0;
}