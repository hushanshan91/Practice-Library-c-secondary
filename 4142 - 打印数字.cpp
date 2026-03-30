#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;
    string d_m[4][5]={
        {".....", ".***.", ".***.", ".***.", "....."},
        {"****.", "****.", "****.", "****.", "****."},  
        {".....", "****.", ".....", ".****", "....."},
        {".....", "****.", ".....", "****.", "....."}
    };
    for(int i=0;i<5;i++) 
	{
        for(int j=0;j<n.length();j++) 
		{
            int cnt=n[j]-'0';
            cout<<d_m[cnt][i];
        }
        cout<<endl;
    }
    return 0;
}
