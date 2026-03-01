#include<iostream>
using namespace std;
int main(){
    int y1,m1,d1,y2,m2,d2;
    cin>>y1>>m1>>d1;
    cin>>y2>>m2>>d2;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum1=0,sum2=0;
    for(int i=1;i<y1;i++) 
	{
        if((i%400==0)||(i%4==0&&i%100!=0))
            sum1+=366;
        else
            sum1+=365;
    }
    for(int i=1;i<m1;i++) 
	{
        if(i==2&&((y1%400==0)||(y1%4==0&&y1%100!=0)))
            sum1+=29;
        else
            sum1+=a[i];
    }
    sum1+=d1;
    for(int i=1;i<y2;i++) 
	{
        if((i%400==0)||(i%4==0&&i%100!=0))
            sum2+=366;
        else
            sum2+=365;
    }
    for(int i=1;i<m2;i++) 
	{
        if(i==2&&((y2%400==0)||(y2%4==0&&y2%100!=0)))
            sum2+=29;
        else
            sum2+=a[i];
    }
    sum2+=d2;
    cout<<sum2-sum1;
    return 0;
}
