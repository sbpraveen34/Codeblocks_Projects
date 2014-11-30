#include<iostream>

using namespace std;

int main()
{
    int t,n,m,ma,s=0;
    cin>>t;
    while(t>0)
    {
        s=0;
        cin>>n>>m;
        int a[n];
        cin>>a[0];
        ma=a[0];
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>ma)
            {
                ma=a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            s=s+(ma-a[i]);
        }
        if((m-s)%n==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

        t--;
    }
    return 0;
}
