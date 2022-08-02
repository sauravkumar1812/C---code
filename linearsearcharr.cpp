 #include<iostream>
using namespace std;
int main(){
    int max=INT_MIN,min=INT_MAX,n,key=78;

    cout<<"Enter size of arrays :";
    cin>>n;
    int arr[100];
    cout<<"Enter the element of arrays:"<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        if (key==arr[i]){
            flag=true;
            cout<<"Found at index :"<<i;
            break;
        }
      
    }
    if(flag==false){
        cout<<"Not found!"<<endl;
    }
   
    return 0;
}