#include<iostream>
#include<cstdio>
#define ll long long

using namespace std;

int main()
{
    int t,i,c;
    int a[]={2048,1024,512,256,128,64,32,16,8,4,2,1};
    scanf("%d",&t);
    ll n;
    while(t>0)
    {
        i=0;c=0;
        scanf("%lld",&n);
        while(n>0)
        {
            if(a[i] <= n)
            {
                n=n-a[i];
                c++;
            }
            else
                i++;
        }
        cout<<c<<endl;
        t--;
    }
return 0;
}
