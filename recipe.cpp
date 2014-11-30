#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
int gcd (int a,int b)
{
    int r;
    if( a%b == 0)
        return b;
    else
    {
        while(a%b!=0)
        {
            r=b;
            b=a%b;
            a=r;
        }
        return b;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,k,p,g;
        vector<int> a;
        scanf("%d",&n);

        scanf("%d",&p);
        a.push_back(p);
        for(int i=1;i<n;i++)
        {
            scanf("%d",&k);
            a.push_back(k);
            p=gcd(max(k,p),min(k,p));

        }
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]/p<<" ";
        }
        cout<<endl;
        t--;
    }
}
