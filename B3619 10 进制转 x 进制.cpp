#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x;
	string cnt;
	cin>>n>>x;
	while(n>0)
	{
        int t=n%x;
		if(t<10)
        {
        	cnt+=char(t+'0');
		}          
        else
        {
        	cnt+=char(t-10+'A');
		}
    	n/=x;
	}
	reverse(cnt.begin(),cnt.end());
	cout<<cnt;
	return 0;
}
