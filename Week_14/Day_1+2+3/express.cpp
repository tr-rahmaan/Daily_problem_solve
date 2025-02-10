#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int on=(a*b*c);
    int to=(a+b)*c;
    int tr=a*(b+c);
    int fr=a+(b*c);
    cout<<max({on,to,tr,fr})<<endl;
    return 0;
}

