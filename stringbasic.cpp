#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[10]="HELLO";
     char str2[10]="WORLD";
     char str3[10];
     int len;
     strcpy(str3,str1);
     cout<<"strcpy(str3,str1) :"<<str3<<endl;
      strcat(str1,str2);
     cout<<"strcat(str1,str2) :"<<str1<<endl;
     len =strlen(str1);
     cout<<"strlen(str1) :"<<len<<endl;
     return 0;
}