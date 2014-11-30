#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<cctype>
#include<cmath>
#include<cstring>
#include<queue>
#include<cstdio>
using namespace std;
#define pb push_back
#define pi 3.141592653589793238462643383

int main()
{
    int n,t=1;
    while(1){
        cin>>n;
        if(n==0)
            break;
        int a[n][n];
        int i,j,ans1 = 0;
        for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cin>>a[i][j];
                    ans1+=a[i][j];
                }
        }
        int ans = 0;
        int out,in;
        for(i=0;i<n;i++){
            out = 0;
            in = 0;
            for(j=0;j<n;j++)
                out+=a[i][j];
            for(j=0;j<n;j++)
                in+=a[j][i];
            if(out-in>=0)
                ans+=out-in;
        }
        printf("%d. %d %d\n",t,ans1,ans);
        t++;
    }



}
