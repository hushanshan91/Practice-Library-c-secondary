#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	long long ans=0;
	string s;
	cin>>x>>s;
	for(char c:s)
	{
		int t=0;
		if(c>='0'&&c<='9')	
		{
			t=c-'0';
		}
		else 
		{
			t=c-'A'+10;
		}
		ans=ans*x+t;
	}
	cout<<ans;
	return 0;
}
