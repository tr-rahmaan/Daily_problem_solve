#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x;
        cin>> n >> k >> x;
        string s;
        cin >> s;
        long long inv=0,on=0;
        for(int i = 0; i<s.size() ;i ++)
        {
            if(s[i]=='1')on++;
            else inv+=on;
        }
        if(inv<=k && inv%x==0)
        {
            cout <<"1"<<endl;
        }else
        {
            cout <<"2"<<endl;
        }

    }
    return 0;
}
