#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> j;
	vector<int> o;
	int a;
	for(int i=0;i<10;i++)
	{
		cin>>a; 
		if(a%2==1)
            o.push_back(a);
        else
            j.push_back(a);
	} 
	sort(o.begin(),o.end(),greater<int>());
	reverse(j.begin(),j.end());
	for(int i=0;i<o.size();i++) 
	{
        cout<<o[i];
        //cout<<1;
        cout<<" ";
    }
    for(int i=0;i<j.size();i++) 
	{
        cout<<j[i];
        //cout<<2;
        cout<<" ";
    }
	return 0;
}
