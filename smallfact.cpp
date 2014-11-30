#include<iostream>
#include<cstdio>
#define ll long long

using namespace std;

void product(ll* m, ll n, ll &sizeofm)
{
   ll x,temp=0;
   for(ll i=0;i<sizeofm;i++)
   {
       x=m[i]*n+temp;
       temp=x/10;
       m[i]=x%10;
   }
   while(temp>0)
   {
       m[sizeofm]=temp%10;
       sizeofm++;
       temp=temp/10;
   }
}
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t>0)
    {
        ll m[200];
        m[0]=1;
        ll n,sizeofm=1;
        scanf("%lld",&n);
        for(ll i=2;i<=n;i++)
        {
           product(m,i,sizeofm);
        }
        for(ll j =sizeofm-1;j>=0;j--)
        {
            printf("%lld",m[j]);
        }
        printf("\n");
        t--;
    }
    return 0;
}
