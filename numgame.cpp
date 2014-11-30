#include<iostream>
#include<cstdio>
#define ll long long
#include<string>

using namespace std;

int main()
{
    int t;
    ll n;
    bool w=true;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n==1)
        {
            printf("BOB\n");
            continue;
        }
        if(n==2)
        {
            printf("ALICE\n");
            continue;
        }
        while(n>=2)
        {
           // cout<<n<<endl;
            for(int j=n/2;j>=1;j--)
            {
                if(n%j ==0)
                {
                    n=n-j;
                    if(w)
                    {
                        w=false;
                    }
                    else
                        w=true;
                    break;
                }
            }
        }
        if(n==2)
        {
            if(w)
                printf("ALICE\n");
            else
                printf("BOB\n");
        }
        if(n==1)
        {
            if(w)
                printf("BOB\n");
            else
                printf("ALICE\n");
        }
    }
return 0;
}
