#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	for(int i=0;i<n;i++)
	{
		string s=to_string(a[i]);
		int m=s.length();
		int sum=0;
		for(int j=0;j<n;j++)
		{
			int l=s[i]-'0';
			sum+=pow(l,n);
		}
		if(a[i]==sum) 
		{
			cout<<"T"<<endl;
		}  
		else
		{
			cout<<"F"<<endl;
		}
	}
	return 0;
}
