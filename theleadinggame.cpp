#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int p1,p2,a1=0,a2=0,d,maxd=-1,lp,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&p1,&p2);
        a1=a1+p1;
        a2=a2+p2;
        if(a1>a2)
        {
            // player 1 is leading
            d=a1-a2;
            if(d>maxd)
            {
                lp=1;
                maxd=d;
            }
        }
        else
        {
            // player 2 leading case
            d=a2-a1;
            if(d>maxd)
            {
                lp=2;
                maxd=d;
            }
        }
    }
    printf("%d %d\n",lp, maxd);
    return 0;
}
