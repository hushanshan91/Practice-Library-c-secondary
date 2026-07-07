#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		cnt=0;
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				cnt+=j;
			}
		}
		if(cnt==i)
		{
			cout<<i<<endl; 
		}
	}	
	return 0;
}
