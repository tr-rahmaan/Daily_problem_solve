#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int total=n;
    int level=0;
    int i=1;
    while(1)
    {
        int ned=(i*(i+1))/2;
        if(n>=ned)
        {
            level++;
            n=n-ned;
            i++;
        } else break;
        //i++;
    }
    cout<< level << endl;
    return 0;
}

