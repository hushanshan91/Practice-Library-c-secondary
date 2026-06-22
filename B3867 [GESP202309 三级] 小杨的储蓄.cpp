#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,x;
    cin>>n>>d;
    int a[1010]={0};
    for(int i=1;i<=d;i++) 
	{
		x=0;
		cin>>x;
		a[x]+=i;
    }
    for(int i=0;i<n;i++) 
	{
        cout<<a[i];
        if(i<n-1)	cout<<" "; 
    }
    return 0;
}
