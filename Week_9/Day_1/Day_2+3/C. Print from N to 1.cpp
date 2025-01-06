#include<bits/stdc++.h>
using namespace std;

void number(long long int n)
{
    if(n==0){
        return ;
    }
    if(n==1){
        cout <<n;

    }
    else cout << n <<" ";

   number(n-1);
}

int main() {

   long long int n;
   cin >> n;
   number(n);
   cout <<'\n';
   return 0;
}




