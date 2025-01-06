#include<bits/stdc++.h>
using namespace std;

void print(long long int n)
{
    if(n==0) return;
    cout <<"I love Recursion"<<'\n';

   //if(n==0) return;
   print(n-1);
}

int main() {

   long long int n;
   cin >> n;
   print(n);
   cout <<'\n';
   return 0;
}





