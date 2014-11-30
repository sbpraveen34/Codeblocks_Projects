#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

int a[1005];
char str[10];
int main()
{
    int n,d,j,s=0;
    scanf("%d %d",&n,&d);
    memset(a,0,sizeof(a));
    for(int i=0;i<d;i++)
    {
        scanf("%s %d",&str,&j);
        if(strcmp(str,"CLOSEALL")==0)
        {
            cout<<0<<endl;
            memset(a,0,sizeof(a));
            //cout<<0<<endl;
            s=0;
            continue;
        }
        if(a[j]==0)
        {
            a[j]=1;
            s++;
        }
        else
        {
            a[j]=0;
            s--;
        }
        cout<<s<<endl;
    }
return 0;
}
