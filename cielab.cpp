#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c=a-b;
    int temp=c;
    int r=temp%10;
    if(r==9)
        r=8;
    else
        r=r+1;
    temp=temp/10;
    temp=temp*10+r;
    cout<<temp<<endl;
return 0;
}
