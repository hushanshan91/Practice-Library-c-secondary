#include<iostream>
using namespace std;
int main(){
	long long n;
	long long cnt=0,sum=0;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cnt+=i*i;
		sum+=i*2;
		if(i==1)
		{
			sum+=1;
		}
		if(i==n)
		{
			sum+=n;
		}
	}
	cout<<sum+(n-1)<<endl<<cnt;
	return 0;
}
