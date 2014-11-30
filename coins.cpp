#include<iostream>
#include<cstdio>
#include<map>
#define ll long long
using namespace std;
map<int,ll> dp;
ll cc(ll n)
{
    if(n==0) return n;
    if(dp[n]!=0) return dp[n];
    ll aux=cc(n/2)+cc(n/3)+cc(n/4);
    if(aux>n) dp[n]=aux;
    else
        dp[n]=n;

    return dp[n];

}
int main()
{
    ll n;
    while(scanf("%lld",&n)==1)cout<<cc(n)<<endl;
return 0;
}
