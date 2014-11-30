#include<iostream>
#include<cstdio>
#include<cmath>
#define ld long double

using namespace std;

ld distance(int ax,int ay,int bx,int by)
{
    ld dist,x,y;
    x=pow(ax-bx,2);
    y=pow(ay-by,2);
    //cout<<x<<" "<<y<<endl;
    dist=sqrt(x+y);
    //cout<<dist<<endl;
    return dist;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int r;
        scanf("%d",&r);
        int cx,cy,hx,hy,sx,sy;
        scanf("%d %d",&cx,&cy);
        scanf("%d %d",&hx,&hy);
        scanf("%d %d",&sx,&sy);
        ld dch,dcs,dhs;
        dch=distance(cx,cy,hx,hy);
        dcs=distance(cx,cy,sx,sy);
        dhs=distance(hx,hy,sx,sy);
        /*
        dch= dcs + dhs
        dcs= dch + dhs
        dhs= dhc + dcs
        */
        bool f1=false,f2=false,f3=false;
        if(dch <= r )
            f1=true;
        else
        {
            if(dcs <= r && dhs <= r)
                f1=true;
        }
        if(dcs <= r)
            f2=true;
        else
        {
            if(dch <=r && dhs <=r)
                f2=true;
        }
        if(dhs<=r)
            f3=true;
        else
        {
            if(dch <=r && dcs<=r)
                f3=true;
        }
        if(f1 && f2 && f3)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        t--;
    }
return 0;
}
