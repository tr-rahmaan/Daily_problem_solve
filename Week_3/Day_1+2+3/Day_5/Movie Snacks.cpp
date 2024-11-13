#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y,z;
   cin>>x>>y>>z;
   int total=2*x+3*y;
   int opt=z+(x+2*y);
   int orr=z+z+y;
   cout<<min({total,opt,orr})<<endl;

    return 0;
}

