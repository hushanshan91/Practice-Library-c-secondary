#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[1000],cnt=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[j]>a[i])
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0; 
}
