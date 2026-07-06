#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[105],maxn=0,minn=0;
    cin>>n;
    for(int i=0;i<n;i++) 
	{
		cin>>a[i];	
	}        
    for(int i=1;i<n;i++) 
	{  
        if(a[i]>a[maxn])
		{
			maxn=i;	
		}
        if(a[i]<a[minn]) 
		{
			minn=i;	
		}
    }
    swap(a[0],a[minn]);
    if(maxn==0) 
	{
		maxn=minn;
	}
    swap(a[maxn],a[n-1]);
    for(int i=0;i<n;i++) 
	{
		cout<<a[i]<<" ";
	}
    return 0;
}
