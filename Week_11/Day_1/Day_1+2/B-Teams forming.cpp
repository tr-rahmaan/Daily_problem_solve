#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int n;
    cin >> n ;
    vector<int>v(n);
    for(int i = 0; i< n ;i ++)
    {
        cin >> v[i];
    }
    int sum = 0;
    sort(v.begin(),v.end());
    for(int i = 0 ;i < n;i+=2)
    {
        if(v[i]!=v[i+1]){
            sum+=(v[i+1]-v[i]);
        }
    }

    cout << sum << endl;
    return 0;
}
