#include<bits/stdc++.h>
using namespace std;

long long int power(int a, int n)
{
    long long sum=1;
    for(int i =0;i<n;i++)
    {
        sum*=(long long)(a);
    }
    return sum;
}

int main() {

   long long int sum=1,n,x;
   cin>> n >> x;
    for(int i =2;i<=x;i+=2)
    {
        sum +=power(n,i);
    }
    cout << sum -1 << endl;
    return 0;
}


