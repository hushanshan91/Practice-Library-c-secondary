#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10005],maxn=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[maxn]<a[i])
		{		
			maxn=i;
		}
	}
	swap(a[0],a[maxn]);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0; 
}
