#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5][5];
	bool found=false;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int l=0;l<5;l++)
	{
		int max=1;
		for(int j=0;j<5;j++)
		{
			if(a[l][j]>a[l][max])
			{
				max=j;
			}
		}	
		bool ismin=true;
		for(int k=0;k<5;k++)
		{
			if(a[k][max]<a[l][max])
			{
				ismin=false;
			}
		}
		if(ismin)
		{
			cout<<l+1<<" "<<max+1<<" "<<a[l][max];
			return 0;
		}
	}
	if(!found)
	{
		cout<<"not found";
	}
	return 0;
}
