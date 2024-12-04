#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s,t;
    cin >> s;
    int  ans=0;
    map<string,int>cnt;
    for(int i=0 ;i<s.size()-1 ;i++)
    {
       string need=s.substr(i,2);
       cnt[need]++;
       if(cnt[need] > ans)
       {
           ans=cnt[need];
           t=need;
       }
    }

    cout << t << endl;
    return 0;
}

