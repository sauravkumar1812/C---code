#include<iostream>
using namespace std;
bool pand(int n){
int s=n;
    int t=0;
// while(n!=0){
//    int lastdigit =n%10;
//    t=(t*10)+lastdigit;
//    n=n/10;
// }
for(int i=n;i!=0;i=i/10){
    int lastdigit=i%10;
    t=(t*10)+lastdigit;
    n=n/10;
}

if (s==t)
return true;
else{
    return false;
}
}

int main(){
    int n;
    cout<<"Enter a number fopr check :";
    cin>>n;
    
cout<<pand(n);
return 0;
}