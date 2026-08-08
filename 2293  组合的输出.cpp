#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> result;
vector<int> path;
void backtracking(int a,int b,int c){
    if(path.size()==b)
    {
		result.push_back(path);
		return;
	}
	for(int i=c;i<=a;i++)
	{
		path.push_back(i);
		backtracking(a,b,i+1);
		path.pop_back();
	}
};
int main(){
	int n,r;
	cin>>n>>r;
	backtracking(n,r,1);
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<result[i].size();j++)
		{
			cout<<setw(3)<<result[i][j];
		}
		cout<<endl;
	}
	return 0;
} 
