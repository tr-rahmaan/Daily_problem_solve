#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,e,f;
        cin >> a>> b >> c>> d>> e>> f;
        int total=((b-a+1)+60)%60)+(d-c+1)+(f-e+1);
        cout<<total<<endl;
    }
    return 0;
}


