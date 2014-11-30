#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

bool palin(string s)
{
    int n=s.length();
    for(int i=0;i<=n/2;i++)
    {
        if(s.at(i)!=s.at(n-(i+1)))
            return false;
    }
    return true;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        string s,a,b;
        bool f=false;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(i==0)
            {
                a=s.substr(1);
                if(palin(a))
                {
                    f=true;
                    break;
                }
            }
            else
            {
                a=s.substr(0,i);
                b=s.substr(i+1);
                if(palin(a+b))
                {
                    f=true;
                    break;
                }
            }
        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        t--;
    }
return 0;
}
