#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);   
    int cnt=0;
    bool flag=false;
    for (char c:s) 
	{
        if(c>='0'&&c<='9') 
		{
            if(flag==false) 
			{   
            
                cnt++;
                flag=true;
            }
        } 
		else 
		{
            flag=false;      
        }
    }
    cout<<cnt<<endl;
    return 0;
}
