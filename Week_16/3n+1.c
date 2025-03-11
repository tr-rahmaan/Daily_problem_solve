#include<bits/stdc++.h>
using namespace std;

int seris(int n)
{
    if(n==1) return 1;
    else
    {
        if(n%2==0) return 1+(seris(n/2));
        else return 1+3*(seris(n)+1);
    }
}

int main()
{
    int a;
    cin >>a;
    seris(a);
    cout<<endl;
}
