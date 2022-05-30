#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int number,positive=0,negative=0,zero=0;
    char choice='y';
    cout<<"Enter a number:"<<endl;
    cin>>number;
    do{
    if(number>0){
        positive++;
    }
   else if(number<0){
        negative++;
    }
    else {
        zero++;
    }
    cout<<"DO you want to continue(y/n)?"<<endl;
    cin>>choice;
    }
    
    while(choice=='y'||choice=='Y');

    
cout<<"Positive number:"<<positive<<endl<<"Negative number:"<<negative<<endl<<"Zero number:"<<zero<<endl;
    
  return 0;  
}