#include<bits/stdc++.h>
using namespace std;

int main()
{
   int q;
   cin >> q;
   while (q--)
   {
       long long x,y,k,gcd,lcm;
       cin >> x >> y >> k;
       if(x==y)
       {
           cout << x+y << '\n';
           continue;
       }
       while(k--)
       {
           gcd=__gcd(x,y);
           if(x>= y) x=gcd;
           else y=gcd;

           lcm=(x/gcd)*y;
           if(x>= y) x=lcm;
           else y=lcm;
           if(x == y) break;
       }
       cout <<x + y << '\n';
   }
    return 0 ;
}
