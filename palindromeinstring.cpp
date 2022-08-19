#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    bool ispal=true;
    cout<<"Enter a string :";
    cin>>str;
    cout<<str<<endl;
    int i=0;
    int j=str.length()-1;
    while (i<=j)
    {
       if(str[i]!=str[j]){
          ispal=false;
        
         break;
       }
       i++;
       j--;
    }
    if(ispal==true){
        cout<<"PALINDROME"<<endl;
    }
    else{
        cout<<"NOT PALINDROME"<<endl;
    }
    
    return 0;
}