#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	string s[100];
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<t;i++)
	{
		int sum=0,ans=0,cnt=0; 
		for(int j=0;j<s[i].length();j++)
		{
			//cout<<s[i]<<" ";
			char c=s[i][j];
			ans++;
			//cout<<c<<" ";
			if(c>='A'&&c<='Z')	
			{
				sum++;
				//cout<<c<<" ";
			}
			if(c>='0'&&c<='9')
			{
				cnt++;
				//cout<<c<<" ";
			}	
			//cout<<sum<<endl;			
		}
		if(sum>=1&&ans>=8&&cnt>=1)
		{
			cout<<"Y"<<endl;
		} 
		else
		{
			cout<<"N"<<endl;
		}		
	}
	return 0;
}
