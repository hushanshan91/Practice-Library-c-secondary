#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	char l;
	cin>>n>>m>>l;
	if(l=='+')
	{
		if(n+m==0)
			cout<<"Divided by zero!";
		else
			cout<<n+m;
		return 0;
	}
	if(l=='-')
	{
		if(n-m==0)
			cout<<"Divided by zero!";
		else
			cout<<n-m;
		return 0;
	}
	if(l=='*')
	{
		if(n*m==0)
			cout<<"Divided by zero!";
		else
			cout<<n*m;
		return 0;
	}
	if(l=='/')
	{
		if(m==0)
			cout<<"Divided by zero!";
		else
			cout<<n/m;
		return 0;
	}
	if(l!='+'&&l!='-'&&l!='*'&&l!='/')
	{
		cout<<"Invalid operator!";
	}
	return 0;
}
