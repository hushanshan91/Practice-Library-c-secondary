#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string cnt;
	cin>>n;
	if(n==0)
	{
		cout<<0;
		return 0;
	}
	while(n>0)
	{
		cnt+=char(n%2+'0');
		n/=2;
	}
	reverse(cnt.begin,cnt.end);
	cout<<cnt;
	return 0;
}
