#include<iostream>
#include<cstdio>
#define ll long long

using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t>0)
    {
        ll n,c,k,s=0;
        cin>>n>>c;
        for(int i=0;i<n;i++)
        {
            cin>>k;
            s=s+k;
        }
        if(s<=c)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        t--;
    }
return 0;
}
