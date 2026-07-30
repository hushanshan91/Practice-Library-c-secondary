#include<bits/stdc++.h>
using namespace std;
struct Node{
	int s,k;
};
Node a[5005];
bool cmp(Node b,Node c){
	if(b.s!=c.s)
	{
		return b.s>c.s;
	}
	else
	{
		return b.k<c.k;
	}
};
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].k>>a[i].s;
	}
	sort(a,a+n,cmp);
	int pos=m*3/2;
	int score=a[pos-1].s;
	int cnt=0;
	while(cnt<n&&a[cnt].s>=score)
	{
		cnt++;
	}
	cout<<score<<" "<<cnt<<endl;
	for(int i=0;i<cnt;i++)
	{
		cout<<a[i].k<<" "<<a[i].s<<endl;
	}
	return 0;
}
