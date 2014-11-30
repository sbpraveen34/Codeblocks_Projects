#include<iostream>
#include<vector>

using namespace std;

vector< vector<int> > edge(n);
vector<int> managers;
int main()
{
    int n,d;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>d;
        if(d==-1)
            managers.push_back(i);
        else
        {
            edge[i].push_back(d-1);
        }
    }
    int t;
    while(!managers.empty())
    {
        t=managers.back();
        managers.pop_back();
        vector<bool> visited(n,false);

    }

}
