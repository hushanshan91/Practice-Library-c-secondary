#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,cnt=0;
	cin>>n;
	bool flag=true;
	for(int i=2;i<=n;i++)
	{
		flag=true;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=false;
				break;
			} 
		}
		if(flag==true)
		{
			cnt++;
	    }
    }
	cout<<cnt;
	return 0;
}
