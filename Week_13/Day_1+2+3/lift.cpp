#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,j=1;
    cin >> t;
    while(t--)
    {
        int my,l;
        cin >> my>> l;
        int diff=abs(my-l);

        cout<<"Case "<<j<<": "<<(diff)*4+3*3+5*2+(my*4)<<endl;
        j++;
    }
    return 0;
}
