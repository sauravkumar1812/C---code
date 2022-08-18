#include<iostream>
#include<string>
using namespace std;
int main(){
     int count =0;
string str;
cin>>str;
// int n = str.length();
cout<<str;
cout<<endl;
for(int i=0;str[i]!='\0';i++)
    {count =count+1;} 
    cout<<count;

return 0;
}