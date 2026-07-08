#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool p1=n%2==0;
	bool p2=n>4&&n<=12;
	cout<<(p1&&p2)<<" "<<(p1||p2)<<" "<<(p1!=p2)<<" "<<(!p1&&!p2); 
	return 0;
}
