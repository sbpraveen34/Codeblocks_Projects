#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;

vector<ll> nextpalin(vector<ll> num)
{
    int l=num.size();
    int i,j,mid;
    bool leftles=false;
    vector<ll> temp;
    if(l%2)
    {
        mid=l/2;
        i=mid-1;
        j=mid+1;
    }
    else
    {
        mid=l/2;
        i=mid-2;
        j=mid+1;
    }
    while(i>=0 && j<l)
    {
        if(temp[i]==temp[j])
        {
            i--;
            j++;
        }
        else
        {
            if(temp[i]<temp[j] && !leftles)
            {
                if(l%2)
                {
                    if(mid<9)
                        temp[mid]++;
                    else
                    {
                        temp[mid]=0;
                        int k=mid--;
                        while(temp[k]<9)
                    }
                }
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;

    }
return 0;
}
