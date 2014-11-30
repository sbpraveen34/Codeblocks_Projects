#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g;
        scanf("%d",&g);
        while(g--)
        {
            int i,n,q;
            scanf("%d %d %d",&i,&n,&q);
            if(n%2)
            {
                if(i==q)
                    cout<<n/2<<endl;
                else
                    cout<<(n/2)+1<<endl;
            }
            else
                cout<<n/2<<endl;
        }
    }
}
