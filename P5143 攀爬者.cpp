#include<bits/stdc++.h>
using namespace std;
struct Node{
	double x;
	double y;
	double z;
};
bool cmp(Node a,Node b){
	return a.z<b.z; 
};
int main(){
	int n;
	cin>>n;
	vector<Node> p(n);
	for(int i=0;i<n;i++)
	{
		cin>>p[i].x>>p[i].y>>p[i].z;
	}
	sort(p.begin(),p.end(),cmp);
	double sum=0;
	for(int i=1;i<n;i++)
	{
		double cntx=p[i].x-p[i-1].x;
        double cnty=p[i].y-p[i-1].y;
        double cntz=p[i].z-p[i-1].z;
        sum+=sqrt(cntx*cntx+cnty*cnty+cntz*cntz);
	} 
	cout<<fixed<<setprecision(3)<<sum<<endl;
	return 0;
} 
