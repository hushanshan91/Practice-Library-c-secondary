#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s[100];
	cin>>n;
	for (int i=0;i<n;i++) 
	{
        cin>>s[i];
        for (int j=0;j<s[i].length();j++) 
        {
            s[i][j]=tolower(s[i][j]);
        }
    }	
	sort(s,s+n);
	string highest=s[0];
	int max=1;
	int c=1; 
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			c++;
		} 
		else
		{
			if(c>max)
			{
				max=c;
				highest=s[i-1];
			}
			c=1;
		}
	}
	if(c>max)
	{
		highest=s[n-1];
	}
	cout<<highest;
	return 0;
}
