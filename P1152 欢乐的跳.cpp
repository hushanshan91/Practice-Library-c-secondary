#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;	
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	vector<bool> vis(n,false);
	for(int i=1;i<n;i++)
	{
		int d=abs(a[i]-a[i-1]);
		if(d<0||d>=n||vis[d])
		{
			cout<<"Not jolly";
			return 0;
		}
		vis[d]=true;
	}
	cout<<"Jolly";
	return 0;
}
