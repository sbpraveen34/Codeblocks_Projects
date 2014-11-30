#include<iostream>
#include<cstdio>
#include<set>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,k,count=-1,c;
        scanf("%d",&n);
        int a[10001]={0};
        set<int> myset;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&k);
            myset.insert(k);
            a[k]++;
        }
        for (set<int>::iterator it=myset.begin(); it!=myset.end(); ++it)
        {
            if(a[*it]>count)
            {
                c=*it;
                count=a[*it];
            }
        }
        cout<<c<<" "<<count<<endl;
        t--;
    }
}
