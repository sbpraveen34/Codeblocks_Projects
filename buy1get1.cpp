#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cctype>

#define ll long long

using namespace std;

int main()
{
    int t;
    string s;
    scanf("%d",&t);
    while(t>0)
    {
        cin>>s;
        int k;
        vector<int> capital(26,0),small(26,0);
        for(int i=0;i<s.length();i++)
        {
            if(isupper(s.at(i)))
            {
                k=s.at(i)-'A';
                capital[k]++;
            }
            else
            {
                k=s.at(i)-'a';
                small[k]++;
            }
        }
        int cost=0;
        for(int i=0;i<26;i++)
        {
            if(small[i]>0)
            {
                if(small[i]%2==0)
                {
                    cost=cost+(small[i]/2);
                }
                else
                {
                    cost=cost+(small[i]/2 + 1);
                }
            }
            if(capital[i]>0)
            {
                if(capital[i]%2==0)
                {
                    cost=cost+(capital[i]/2);
                }
                else
                {
                    cost=cost+(capital[i]/2 + 1);
                }
            }
        }
        cout<<cost<<endl;
        t--;
    }
return 0;
}
