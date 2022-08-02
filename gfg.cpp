//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool pand(int n){
//int s=n;
    int t=0;
// while(n!=0){
//    int lastdigit =n%10;
//    t=(t*10)+lastdigit;
//    n=n/10;
// }
for(int i=n;i!=0;i=i/10){
    int lastdigit=i%10;
    t=(t*10)+lastdigit;
    // n=n/10;
}
cout<<t<<"##"<<n<<endl;
if (n==t)
return true;
else{
    return false;
}
}
    int PalinArray(int a[], int n)
    {
    for(int i=0;i<n;i++){
        if(!pand(a[i]))
        return 0;
    }
    return 1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends