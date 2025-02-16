#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t ;
    cin >> t;
    while(t--)
    {
        int a,b,diff;
        cin >> a >> b;
       if(a==b) cout<<"0"<<endl;
       else if(a>b)
       {
           diff=a-b;
           if(diff%2==0) cout<<"1"<<endl;
           else cout<<"2"<<endl;
       }else if(b>a)
       {
           diff=b-a;
            if(diff%2==0) cout<<"2"<<endl;
           else cout<<"1"<<endl;

       }
    }

    return 0;
}

