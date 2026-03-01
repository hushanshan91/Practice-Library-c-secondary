#include<iostream>
using namespace std;
int main(){
    int l,r,cnt=0;
    cin>>l>>r;
    for(int x=0;x<=14;x++) 
	{
        long long a=1;
        for(int i=0;i<x;i++) 
		{
            a*=2;
        }
        for(int y=x;y<=14;y++) 
		{
            long long b=1;
            for(int i=0;i<y;i++) 
			{
                b*=2;
            }
            long long sum=a+b;
            if (sum>=l&&sum<=r) 
			{
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
