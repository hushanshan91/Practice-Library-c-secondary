#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long a[1010],cnt=0;
	cin>>n;	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cnt+=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[i-1]+1)
		{
			a[i]=a[i-1]+1;
		}
		cnt+=a[i];
	}
	cout<<cnt;
	return 0;
}
