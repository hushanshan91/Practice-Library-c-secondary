#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin>>m;
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int week[]={0,2,5,5,1,3,6,1,4,0,2,5,0};
	cout<<"MON TUE WED THU FRI SAT SUN"<<endl;
	int cnt=month[m];
    int sum=week[m];
    for(int i=1;i<=sum;i++)
    {
    	if(i==0)
    		printf("   ");
    	else
    		printf("    ");
	}
	for(int i=1;i<=cnt;i++)
	{		
		int cur_week=(sum+i-1)%7;
		if(cur_week==0)
		{
			printf("%3d",i);
		}
		else
		{
			printf("%4d",i);
		}	
		if(cur_week==6||i==cnt)
		{
			printf("\n");
			cur_week=0;
		}
	}
	return 0;
}
