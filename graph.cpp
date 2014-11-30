#include<iostream>
#include<vector>

using namespace std;

class graph
{
private:
    int n;
    vector< vector<int> > edge;
public:

    graph(int g_size)
    {
        n=g_size;
        edge.resize(n);
    }
    void insert_edge(int start,int end)
    {
        if(start >=0 && start<n && end>=0 && end <n)
        {
            edge[start].push_back(end);
            edge[end].push_back(start);
            return ;
        }
        else
        {
            cout<<"Sry not possible"<<endl;
            return ;
        }
    }
    void display_list()
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<edge[i].size();j++)
            {
                cout<<edge[i][j]<<" ";
            }
            cout<<endl;
        }
        return ;
    }
};
int main()
{
    graph g(10);
    g.insert_edge(0,1);
    g.insert_edge(1,2);
    g.insert_edge(0,3);
    g.insert_edge(8,1);
    g.display_list();
    return 0;
}
