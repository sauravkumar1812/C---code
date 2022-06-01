#include<iostream> 
#include<math.h>
using namespace std;
int main(){
    int number,octal=0,num,i=0;
    cout<<"Enter an integer to find octal values:";
    cin>>number;
    while(number!=0){
        num=number%8;
        octal=octal+num*pow(10,i);
        i++;
        number=number/8;
    }
    cout<<"Octal vales is :"<<octal;
    return 0;
}