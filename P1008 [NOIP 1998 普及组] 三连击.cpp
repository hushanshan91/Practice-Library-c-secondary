#include<bits/stdc++.h>
using namespace std;
int a[10]={6,2,5,5,4,5,6,3,7,6};
int main(){
	int n,ans=0;
	cin>>n;
	n-=4;
	vector<int> match_cost(2001,0);
    for(int i=0;i<=2000;i++) 
	{
		if(i==0) 
		{
            match_cost[i]=a[0];
        } 
		else 
		{
            int temp=i;
            int total=0;
            while(temp>0) 
			{
                total+=a[temp%10];
                temp/=10;
            }
            match_cost[i]=total;
        }    
	}
	for(int a2=0;a2<=1000;a2++)
	{
		for(int b=0;b<=1000;b++)
		{
	    	int c=a2+b;
	    	if(match_cost[a2]+match_cost[b]+match_cost[c]==n) 
			{
            	ans++;
        	}
		}
	}
	cout<<ans;
	return 0;
}
