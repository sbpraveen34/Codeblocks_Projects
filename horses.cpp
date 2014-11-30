#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long

using namespace std;

vector<ll> mergesort(vector<ll> data)
{
    if(data.size()==1)
        return data;
    vector<ll> left=mergesort(vector<ll>(data.begin(),data.begin()+(data.size()/2)));
    vector<ll> right=mergesort(vector<ll>(data.begin()+(data.size()/2),data.end()));
    int lftptr=0;
    int rgtptr=0;
    vector<ll> result;
    while(lftptr<left.size() && rgtptr<right.size())
    {
        if(left[lftptr]<right[rgtptr])
        {
            result.push_back(left[lftptr]);
            lftptr++;
        }
        else
        {
            result.push_back(right[rgtptr]);
            rgtptr++;
        }
    }
    if(lftptr<left.size())
    {
        while(lftptr<left.size())
        {
            result.push_back(left[lftptr]);
            lftptr++;
        }
    }
    if(rgtptr<right.size())
    {
        while(rgtptr<right.size())
        {
            result.push_back(right[rgtptr]);
            rgtptr++;
        }
    }
    return result;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n;
        ll k;
        vector<ll> data;
        scanf("%d",&n);
        for(int i =0;i<n;i++)
        {
            scanf("%lld",&k);
            data.push_back(k);
        }
        data=mergesort(data);
        ll m=999999999;
        for(int i=1;i<n;i++)
        {
            if((data[i]-data[i-1])<m)
            {
                m=data[i]-data[i-1];
            }
        }
        cout<<m<<endl;
        t--;
    }
return 0;
}
