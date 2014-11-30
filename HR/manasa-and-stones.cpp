#include<iostream>
#include<cstdio>
#include<queue>
#include<cstdlib>
#include<cmath>
#include<set>
#define ll long long

using namespace std;
bool setbit(int i,int j)
{
    int k=i;
    int l=1 << j;
    //cout<<k<<" "<<l<<endl;
    return k & l;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,a,b;
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        set<int> res;
       // cout<<pow(2,n)<<endl;
        for(int i=1;i<=pow(2,n);i++)
        {
            ll s=0;
            for(int j=0;j<n-1;j++)
            {
                //cout<<setbit(i,j)<<" ";
                if(setbit(i,j)==1)
                    s=s+a;
                else
                    s=s+b;
            }
            res.insert(s);
        }
        for(set<int>::iterator it=res.begin();it!=res.end();it++)
            cout<<*it<<" ";
        cout<<endl;
        t--;
    }
return 0;
}
