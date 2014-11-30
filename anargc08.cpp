#include<iostream>

using namespace std;

int main()
{
    int k,n,t,z=0;
    cin>>n;
    while(n!=0)
    {
        z++;
        int adj[n][n],ans1=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>adj[i][j];
                ans1=ans1+adj[i][j];
            }
        }
        int out=0,in=0,ans=0;
        for(int i=0;i<n;i++)
        {
            out=0;
            in =0;
            for(int j=0;j<n;j++)
            {
                out=out+adj[i][j];
                in =in +adj[j][i];
            }
            if(out>=in)
                ans=ans+(out-in);

        }
        cout<<z<<" "<<ans1<<" "<<ans<<endl;
        cin>>n;
    }
    return 0;
}
