#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    long long int vol=(long long)a*b*c;
    long long int vol2=(long long)x*x*x;
    if(vol>vol2) cout<<"Cuboid"<<endl;
     else if(vol<vol2) cout<<"Cube"<<endl;
    else cout <<"Equal"<<endl;
    return 0;
}
