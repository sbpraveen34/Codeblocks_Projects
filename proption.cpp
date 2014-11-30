#include<iostream>
#include<map>
#include<vector>
#include<queue>

using namespace std;

int main()
{
    int k,n,t,r,g,b,m;
    cin>>t;
    while(t>0)
    {
        cin>>r>>g>>b>>m;
        int red[r],green[g],blue[b];
        for(int i=0;i<r;i++)
        {
            cin>>red[i];

        }
        for(int i=0;i<g;i++)
        {

            cin>>green[i];
        }
        for(int i=0;i<b;i++)
            cin>>blue[i];

        int rt,gt,bt,max=-1,c;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<r;j++)
            {
                if(max<red[j])
                {
                    max=red[j];

                    c=1;
                }
            }
            for(int j=0;j<g;j++)
            {
                if(max<green[j])
                {
                    max=green[j];

                    c=2;
                }
            }
            for(int j=0;j<b;j++)
            {
                if(max<blue[j])
                {
                    max=blue[j];
                    c=3;

                }
            }
            if(c==1)
            {
                for(int j=0;j<r;j++)
                {
                    red[j]=red[j]/2;
                }
            }
            if(c==3)
            {
                for(int j=0;j<b;j++)
                {
                    blue[j]=blue[j]/2;
                }
            }
            if(c==2)
            {
                for(int j=0;j<g;j++)
                {
                    green[j]=green[j]/2;
                }
            }
        }
        max=-1;
        for(int j=0;j<r;j++)
            {
                if(max<red[j])
                {
                    max=red[j];
                    c=1;
                }
            }
            for(int j=0;j<g;j++)
            {
                if(max<green[j])
                {
                    max=green[j];
                    c=2;
                }
            }
            for(int j=0;j<b;j++)
            {
                if(max<blue[j])
                {
                    max=blue[j];
                    c=3;
                }
            }
            cout<<max<<endl;

        t--;
    }
    return 0;
}
