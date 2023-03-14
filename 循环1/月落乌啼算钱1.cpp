#include<bits/stdc++.h>
using namespace std;
int main(void)
{ 
    double a[1000],sum=0.0,n;
    cin>>n;
    a[0]=0;
    a[1]=1;
    if(n==1)
    {
        cout<<1.00;
        return 0;
    }
    for(int i=2.0;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
        sum=a[i];
    }
    printf("%.2lf",sum); 
    return 0;
} 
