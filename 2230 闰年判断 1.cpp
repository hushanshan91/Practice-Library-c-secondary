#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%4==0&&n%100!=0||n%400==0)
	{
		n=1;
	}
	else
	{
		n=0;
	}
	cout<<n;
	return 0;
}
