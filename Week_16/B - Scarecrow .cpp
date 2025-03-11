#include <bits/stdc++.h>
using namespace std;

int main() {

    int q;
    cin >> q;
    int j=1;
    while(q--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt=0;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(s[i]=='.'){
                cnt++;
                i+=2;
            }
        }
        cout<<"Case "<<j<<":"<<" "<< cnt<<endl;
        j++;
    }
    return 0;
}


