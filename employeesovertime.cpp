//over time in loop
#include<iostream>
using namespace std;
int main(){
    int employee=1,hours,overtime;
    float overtimepay;
    while(employee<=10){
        cout<<"Enter the working hours of employee = ";
        cin>>hours;
        if(hours>40){
            overtime=hours-40;
            overtimepay=overtime*12.00;
            cout<<"overtimepay = "<<overtimepay<<endl;
        }
        else{
        cout<<"you should work more than 40 hours"<<endl;
    
        }
    }
    return 0;

}