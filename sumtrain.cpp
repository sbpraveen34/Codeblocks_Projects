#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    int t,n,k;
    scanf("%d",&t);
    for(int z=0;z<t;z++)
    {
        scanf("%d",&n);
        vector< vector<int> > a(n),b(n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                scanf("%d",&k);
                a[i-1].push_back(k);
                if(i==n)
                {
                    b[i-1].push_back(k);
                }
                else
                    b[i-1].push_back(0);
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<b[i].size();j++)
            {
                b[i][j]=a[i][j]+max(b[i+1][j],b[i+1][j+1]);
            }
        }
        printf("%d\n",b[0][0]);
    }
    return 0;
}
