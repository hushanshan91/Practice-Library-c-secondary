#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int cnt=n%26;
    string r=alphabet.substr(cnt)+alphabet.substr(0,cnt);
    cout<<r;
    return 0;
}
