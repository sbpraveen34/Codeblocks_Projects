#include<iostream>
#include<cstdio>
#include<queue>
#include<set>
#include<vector>

using namespace std;

int main()
{
    int n1,n2,n3,n,c=0;
    scanf("%d %d %d",&n1,&n2,&n3);
    vector<int> a(1000000,0);
    int ma=0;
    for(int i=0;i<n1+n2+n3;i++)
    {
        scanf("%d",&n);
        if(n>ma)
            ma=n;
        a[n]++;
        if(a[n]==2)
            c++;
    }
    cout<<c<<endl;
    for(int i=0;i<=ma;i++)
    {
        if(a[i]>=2)
            cout<<i<<endl;
    }
return 0;
}
