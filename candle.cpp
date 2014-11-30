#include<iostream>
#include<cstdio>
#define ll long long

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int a[10];
        for(int i=0;i<10;i++)
            scanf("%d",&a[i]);
        int m=10,p;
        for(int i=1;i<10;i++)
        {
            if(a[i]<m)
            {
                m=a[i];
                p=i;
            }
        }
        if(a[0]<m)
        {
            cout<<"1";
            for(int i=0;i<=a[0];i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<=a[p];i++)
            {
                cout<<p
                ;
            }
            cout<<endl;
        }
        t--;
    }
}
