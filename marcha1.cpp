#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#define ll long long

using namespace std;
bool setbit(int i,int j)
{
    int k=1<<j;
    int z=i;
    return k&z;
}

int main()
{
    int t,z;
    scanf("%d",&t);
    while(t>0)
    {
        int m,n,ri;
        scanf("%d %d",&n,&m);
        vector<int> b(m+1,9999);
        b[0]=0;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&z);
            a.push_back(z);
        }
        bool flag=false;
        for(int i=1;i<pow(2,n);i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
            {
                if(setbit(i,j))
                {
                    s=s+a[j];
                }
            }
            if(s==m)
            {
                flag=true;
                break;
            }
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        t--;
    }
return 0;
}
