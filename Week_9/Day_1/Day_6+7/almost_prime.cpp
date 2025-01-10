#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n==1) return false;
    for(int i =2;i<n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    int q;
    cin >> q;
    int total=0;
    //int cnt=0;
    for(int i =1 ;i<= q;i++)
    {
        int cnt=0;
        for(int j = 1;j<=i;j++)
        {

            if(i%j==0){
                if(prime(j))cnt++;
            }
        }
        if(cnt==2) total++;
    }

    cout << total << '\n';
    return 0;
}

