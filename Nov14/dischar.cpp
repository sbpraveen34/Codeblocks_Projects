#include<iostream>
#include<cstdio>
#include<vector>
#include<string>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        string s;
        cin>>s;
        vector<int> ch(26,0);
        for(int i=0;i<s.length();i++)
        {
            int c=s.at(i)-'a';
            ch[c]++;
        }
        int count=0;
        for(int i=0;i<26;i++)
        {
            if(ch[i]>0)
                count++;
        }
        cout<<count<<endl;
        t--;
    }
}
