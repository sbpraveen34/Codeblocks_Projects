#include<iostream>
#include<cstdio>
#define LL int
using namespace std;

int main()
{
    LL n,k;
    scanf("%d",&n);
    scanf("%d",&k);
    LL t,count=0;
    for(LL i=0;i<n;i++)
    {
        scanf("%d",&t);
        if(t%k==0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
