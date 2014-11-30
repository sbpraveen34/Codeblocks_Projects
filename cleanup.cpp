#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long

using namespace std;

int main()
{
    ll t,m,n,d;
    scanf("%lld",&t);
    while(t>0)
    {
        scanf("%lld %lld",&n,&m);
        vector<bool> a(n,false);
        for(int i=0;i<m;i++)
        {
            scanf("%lld",&d);
            a[d-1]=true;
        }
        bool flag=true;
        vector<int> chef;
        vector<int> ass;
        for(int i=0;i<n;i++)
        {
            if(!a[i])
            {
                if(flag==true)
                {
                    chef.push_back(i+1);
                    flag=false;
                }
                else
                {
                    ass.push_back(i+1);
                    flag=true;
                }
            }
        }
        for(int i=0;i<chef.size();i++)
        {
            cout<<chef[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<ass.size();i++)
        {
            cout<<ass[i]<<" ";
        }
        cout<<endl;

        t--;
    }
return 0;
}
