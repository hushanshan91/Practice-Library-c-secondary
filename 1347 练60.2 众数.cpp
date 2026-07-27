#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cnt[1005]={0};
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		cnt[x]++;
	}
	int maxn=0;
	for(int i=0;i<1005;i++)
	{
		if(cnt[i]>maxn)
		{
			maxn=cnt[i];
		}
	}
	for(int i=0;i<1005;i++)
	{
		if(cnt[i]==maxn)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0; 
} 
