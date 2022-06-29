 #include<iostream>
using namespace std;
bool prime(int a){
    for(int i=2;i<a;i++){
        if (a%i==0)
           return false;
        }
        return true;
    }
int main(){
    int a;
    cout<<"Enter a number :"<<endl;
    cin>>a;
    prime(a);
    return 0;
}
