#include<iostream>
#include<cstdio>
#include<vector>
#define ll long long

using namespace std;

vector<ll> quicksort(vector<ll> data)
{
    if(data.size()<=1)
        return data;
    for(int i=0;i<data.size();i++)
    {
        printf("%lld ",data[i]);
    }
    printf("\n");
    int mid = (data.size())/2;
    ll midvalue=data[mid];

    printf("%lld \n",midvalue);
    vector<ll> left,right;
    for(int i =0;i<data.size();i++)
    {
        if(data[i]<data[mid])
        {
            left.push_back(data[i]);
        }
        else
            right.push_back(data[i]);
    }
    left=quicksort(left);
    right=quicksort(right);
    vector<ll> result;
    for(int i=0;i<left.size();i++)
    {
        result.push_back(left[i]);
    }
    result.push_back(data[mid]);
    for(int i=0;i<right.size();i++)
    {
        result.push_back(right[i]);
    }
    return result;
}
int main()
{
    ll t,k;
    scanf("%lld",&t);
    vector<ll> a;
    for(ll i=0;i<t;i++)
    {
        scanf("%lld",&k);
        a.push_back(k);
    }
    a=quicksort(a);
    for(int i=0;i<a.size();i++)
    {
        printf("%lld\n",a[i]);
    }
    return 0;
}
