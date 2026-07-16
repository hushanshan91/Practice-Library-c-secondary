#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	char c;
	cin>>n>>c>>m;
	if(c=='+') 
	{
		cout<<n+m;
	}
	if(c=='-') 
	{
		cout<<n-m;
	}
	if(c=='*') 
	{
		cout<<n*m;
	}
	if(c=='/') 
	{
		cout<<n/m;
	}
	if(c=='%') 
	{
		cout<<n%m;
	}
	return 0; 
}
