#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans=0;
	string s[200];
	float bt[200];
	int c[200];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>s[i]>>bt[i]>>c[i];
	}
	for(int i=0;i<n;i++)
	{
		if((bt[i]>=37.5)&&(c[i]==1))
		{
			cout<<s[i]<<endl;
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
