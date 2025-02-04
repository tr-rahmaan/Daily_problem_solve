#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int b,p,f,h,c;
        cin >> b >> p>>f>>h>>c;
        int bun=b/2;
        int pety=min(bun,p);
        int cut=min(bun,f);
        cout<<max((pety*h),(cut*c))<<endl;
    }

    return 0;
}
