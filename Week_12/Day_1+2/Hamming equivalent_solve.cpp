#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            if(v[i]!=i+1)
            {


           int x=__builtin_popcount(v[i]);
           int y =__builtin_popcount(i+1);

           if(x!=y){
            ok = false;
            break;
           }
            }


        }
        if(ok ) cout <<"YES"<<endl;
        else cout <<"NO"<< endl;
    }
    return 0;
}
