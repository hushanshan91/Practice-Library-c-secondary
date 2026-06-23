#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	cin>>n;
	vector<vector<string>> digit(4,vector<string>(5));
	digit[0]=
	{
		".....",
		".***.",
		".***.",
		".***.",
		"....."
	};
	digit[1]=
	{
		"****.",
		"****.",
		"****.",
		"****.",
		"****."
	};
	digit[2]=
	{
		".....",
		"****.",
		".....",
		".****",
		"....."
	};
	digit[3]=
	{
		".....",
		"****.",
		".....",
		"****.",
		"....."
	};
	for(int i=0;i<5;i++)
	{
		for(char c:n)
		{
			cout<<digit[c-'0'][i];
		}
		cout<<endl;
	}
	return 0;
}
