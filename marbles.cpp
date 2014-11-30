#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

ll ncr(ll n,ll r)
{
    if(r>n/2)
        r=n-r;
    ll res=1;
    for(int i=1;i<=r;i++)
    {
        res=res*(n-i+1);
        res=res/i;
    }
    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n,r;
        scanf("%lld %lld",&n,&r);
        if(n==r)
        {
            cout<<1<<endl;
        }
        else
        {
            ll R,M,N;
            R=n-r;
            M=r;
            N=M+R-1;
            cout<<ncr(N,R)<<endl;
        }
    }
return 0;
}
