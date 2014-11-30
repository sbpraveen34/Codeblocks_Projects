#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

int main()
{
    int t;
    ll n;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%lld",&n);
        //cout<<n<<endl;
        cout<<(n/2)+1<<endl;
        t--;
    }
return 0;
}
