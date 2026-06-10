#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[110],cnt=0;
    cin>>n;
    for(int i=0;i<n;i++) 
	{
        cin>>a[i];
    }
    while(true) 
	{
        int maxn=-1;    
        int max_idx=-1; 
        int minn=999999; 
        for(int i=0;i<n;i++) 
		{
            if(a[i]>=maxn) 
			{
                maxn=a[i];
                max_idx=i;
            }
            if(a[i]>0&&a[i]<minn) 
			{
                minn=a[i];
            }
        }
        if(maxn==0) 
		{
            break;
        }
        a[max_idx]-=minn;
        cnt++;
    }
    cout<<cnt;
    return 0; 
}
