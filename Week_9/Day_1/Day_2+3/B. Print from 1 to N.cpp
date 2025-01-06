#include<bits/stdc++.h>
using namespace std;

void number(long long int l,long long int  n)
{
    if(l>n){
        return ;
    }
   cout << l <<'\n';

   number(l+1,n);
}

int main() {

   long long int n;
   cin >> n;
   number(1,n);
   return 0;
}



