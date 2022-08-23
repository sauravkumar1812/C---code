#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char name[15]="CoMPutER";
    for(int x=0;x<strlen(name);x++){
        if(islower (name[x]))
        name[x]=toupper (name[x]);
        else
          if(isupper(name[x]))
        
        if((x%2==0)){
            name[x]=tolower(name[x]);
        }
        else{
            name[x]=name[x-1];
        }
     
    }
    cout<<name<<endl; 
    return 0;
}