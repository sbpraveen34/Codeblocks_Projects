#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int t,n;

    scanf("%d",&t);
    while(t!=0)
    {
        int a[t];
        bool amb=true;
        for(int i=0;i<t;i++)
        {
            scanf("%d",&n);
            a[i]=n;
        }
        for(int i=0;i<t;i++)
        {
            //
            //printf("%d",a[i]);
            if(a[a[i]-1]!=i+1)
            {
                amb=false;
                break;
            }

        }
        if(amb)
        {
            printf("not ambiguous\n");
        }
        else
        {
            printf("ambiguous\n");
        }
        scanf("%d",&t);
    }
    return 0;
}
