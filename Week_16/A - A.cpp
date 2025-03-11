#include<bits/stdc++.h>
using namespace std;

int seris(int n)
{
    if(n==1) return 1;
    else
    {
        if(n%2==0) return 1+ seris(n/2);
        else return 1+seris(3*n+1);
    }
}

int main()
{
    int a;
    cin >>a;
    cout<<seris(a)<<endl;
    cout<<endl;
}
