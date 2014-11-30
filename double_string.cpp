#include<iostream>
#include<cstdio>
#define ll long long

using namespace std;

int main()
{
    int t;
    ll n;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if( n%2==0 )
        {
            cout<<n<<endl;
        }
        else
            cout<<n-1<<endl;
    }
return 0;
}
