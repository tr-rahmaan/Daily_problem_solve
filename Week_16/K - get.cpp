#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
      int j=1;
    while(t--){
    int x1,y1,x2,y2;
    cin >> x1 >> y1>> x2>> y2;
    int n;
    cin >> n;
    cout<<"Case "<<j<<":"<<endl;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        if(a>=x1 && a<=x2 && b>=y1 && b <=y2)
        {
            cout<<"Yes"<<endl;

        }
        else cout <<"No"<<endl;
        //j++;
    }
    j++;
    }
    return 0;
}
