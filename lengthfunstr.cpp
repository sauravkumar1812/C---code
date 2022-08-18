#include<iostream>
#include<string>
using namespace std;
int fun(string str){
     int count =0;
     for(int i=0;str[i]!='\0';i++){
        count +=1;
     }
     return count;
}
int main(){
string str;
    cin>>str;
    cout<<str<<endl;
    cout<<fun(str);
    return 0;
}