#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int maxn=a[0],minn=a[0];
	for(int i=0;i<n;i++) 
	{
        if(a[i]>maxn)	
			maxn=a[i];
        if(a[i]<minn)	
			minn=a[i];
    }
	for(int i=0;i<n;i++)
	{
		if(a[i]>k) 
            a[i]=maxn;
		else if(a[i]<k) 
            a[i]=minn; 
        cout<<a[i]<<" ";
	}
	return 0;
}
