#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0,sum=0;
	string s;
	cin>>n>>s;
	for(int i=0;i<n;i++)
	{
		char c=s[i];
		if(c>='a'&&c<='z')
		{
			sum=(int)c-96;			
			cnt+=sum;
		}
		else
		{
			sum=(int)c;			
			cnt+=-sum;
		}
		sum=0;
	}
	cout<<cnt;
	return 0;
}
