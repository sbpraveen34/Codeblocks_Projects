#include<iostream>
#include<cstdio>
#include<queue>
#include<vector>
#define ll long long

using namespace std;

int main()
{
    int n,k;
    vector<int> perm;
    scanf("%d",&n);
    perm.push_back(0);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        perm.push_back(k);
    }
    vector<int> visited(n+1,false);
    vector< queue<int> > res;
    queue<int> loop;
    loop.push(1);
    while(!loop.empty())
    {
        if(!visited[loop.back()])
        {
            visited[loop.back()]=true;
            loop.push(perm[loop.back()]);
        }
        else
        {
            int start=loop.front();
            res.push_back(loop);
            while(!loop.empty())
            {
                //cout<<loop.front()<<" ";
                loop.pop();
            }
            //cout<<endl;
            for(int i=1;i<=n;i++)
            {
                if(!visited[i])
                {
                    loop.push(i);
                    break;
                }
            }
        }
    }
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++)
    {
        while(!res[i].empty())
        {
            cout<<res[i].front()<<" ";
            res[i].pop();
        }
        cout<<endl;
    }
return 0;
}
