#include<bits/stdc++.h>
using namespace std;
int main(){
	int s,v;
	cin>>s>>v;
    int cnt=480-((s+v-1)/v+10);
    if(cnt<0) 
    {
        cnt+=24*60; 
    }
    int sum1=cnt/60;
    int sum2=cnt%60;
    printf("%02d:%02d\n",sum1,sum2);
    //cout<<cnt<<endl<<sum1<<endl<<sum2;
	return 0;
}
