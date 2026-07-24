#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int cnt=0;
	string  sum=""; 
	getline(cin,s);
	for(char c:s)
	{
		if(c==' ')
		{
			cnt++;
		}
		else
		{
			sum+=c;
		}
	}
	while(cnt--)
	{
		cout<<" ";
	}
	cout<<sum;
	return 0;
} 
