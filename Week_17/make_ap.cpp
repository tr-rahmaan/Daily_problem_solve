#include <bits/stdc++.h>
using namespace std;

void solve(long long int a,long long int b,long long int c)
{
    long long int aa=b-(c-b);
    if(aa!=0 && aa>=a && aa%a==0)
    {
        cout<<"YES"<<endl;
        return;
    }

 long long   int bb=a+(c-a)/2;

    if(bb!=0 && bb>=b && (c-a)%2==0 && bb%b==0)
    {
        cout<<"YES"<<endl;
        return;
    }

  long long  int cc=a+2*(b-a);

    if(cc!=0 && cc%c==0 && cc>=c)
    {
        cout<<"YES"<<endl;
    }

    cout <<"NO"<<endl;
    return ;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
      long long int a,b,c;
       cin >> a >> b >> c;
       solve(a,b,c);

    }
}
