#include<iostream>
#include<cstdio>
#include<queue>
#define ll long long

using namespace std;

int main()
{
    int t,n,z,count=0;
    scanf("%d",&t);
    while(t>0)
    {
        count=0;
        scanf("%d",&n);
        priority_queue<int> pie,racks;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&z);
            pie.push(z);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&z);
            racks.push(z);
        }
        while(!pie.empty())
        {
            z=racks.top();
            if(z>=pie.top())
            {
                count++;
                racks.pop();
                pie.pop();
            }
            else
                pie.pop();
        }
        cout<<count<<endl;
        t--;
    }
}
