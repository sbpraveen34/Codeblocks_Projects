#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long
using namespace std;

int main()
{
    ll t,k;
    scanf("%lld",&t);
    while(t>0)
    {
        ll n;
        vector<ll> a;
        scanf("%lld",&n);
        for(ll i=0;i<n;i++)
        {
            scanf("%lld",&k);
            a.push_back(k);
        }
        ll count=1;
        ll mini=a[0];
        ll d;
        for(ll i=0,j=1;j<n;j++,i++)
        {
            d=a[i]-a[j];
            if(d>=0)
            {
                count++;
            }
            else
                a[j]=a[i];
        }
        cout<<count<<endl;
        t--;
    }
return 0;
}
