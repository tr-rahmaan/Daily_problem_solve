#include<bits/stdc++.h>
using namespace std;
int main()
{


    string s,t;
    cin >> s;

    int cnt =0,cn ;
    int l=0,r=s.size()-1;
    if(s.size()%2==0){
             cn=s.size()/2;
    }
    if(s.size()%2==0){
         while(l<=cn-1){
        if(s[l]!=s[r]){
            cnt++;
        }
        l++;
        r--;
    }

    }else {
    while(l!=r){
        if(s[l]!=s[r]){
            cnt++;
        }
        l++;
        r--;
    }
    }

    cout << cnt << endl;
    return 0;
}

