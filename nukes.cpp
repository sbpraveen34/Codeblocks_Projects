#include<iostream>
#include<cstdio>
#define ll long long
#include<vector>
#include<cmath>

using namespace std;
vector<int> digits;
void convert10tob(ll N,ll b)
{

     if (N==0)
        return;

     int x = N%b;
     //cout<<N<<" "<<x<<endl;
     N/=b;
     //cout<<N<<endl;
     if (x<0)
        N+=1;

     convert10tob(N,b);
     if(x<0)
        digits.push_back(x+(b*-1));
     else
        digits.push_back(x);
     return;
}

int main()
{
    ll a,n,k,m;
    scanf("%lld %lld %lld",&a,&n,&k);
    m=pow(n+1,k);
    a=a%(m);
    if(a==0)
    {
        for(int i=0;i<k;i++)
        {
            cout<<0<<" ";
        }
        return 0;
    }
    else
    {
        convert10tob(a,n+1);
        for(int i =0;i<digits.size();i++)
        {
            cout<<digits[i]<<" ";
        }
        if(digits.size()<k)
        {
            for(int i=digits.size();i<k;i++)
            {
                cout<<0<<" ";
            }
        }
        cout<<endl;
        return 0;
    }
return 0;
}
