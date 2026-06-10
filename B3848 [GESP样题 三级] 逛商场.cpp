#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105],x,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	for(int i=0;i<n;i++)
	{
		if(a[i]<=x)
		{
			x-=a[i];
			cnt++;
		} 
	} 
	cout<<cnt;
	return 0;
}
