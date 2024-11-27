#include <bits/stdc++.h>
using namespace std;

int main() {
   int x,y,z;
   cin >> x >> y >> z;
   int cl=y*z;
   if(cl>x) cout<<-1<<endl;
   else cout << x-cl<< endl;
}

