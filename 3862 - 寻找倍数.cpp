#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,t;
	cin>>n;
	vector<long long>a(n);
	int maxn=0;
	bool flag=true;
	/*
	for(int i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	*/
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>maxn)
		{
			maxn=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{		
		if(maxn%a[i]!=0)
		{
			flag=false;
			break;
		}
	}
	if(flag==true)
	{
		cout<<"Yes"<<endl;
	}
	else if(flag==false)
	{
		cout<<"No"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}		
	return 0;
} 
