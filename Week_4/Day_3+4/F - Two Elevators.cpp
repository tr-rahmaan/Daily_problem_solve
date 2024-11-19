#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    while(q--)
    {
        int a , b, c, tim;
        cin >> a >> b >> c;
        int lift=abs(c-b);
        if(c==1)  tim= abs(b-c);
        else tim= abs(c-1)+lift;
        //int tim= abs(b-1)+(2*lift);
      //  cout<<tim<<endl;
        if(abs(a-1)>tim) cout<<"2"<<endl;
        else if(abs(a-1)<tim) cout<<"1"<<endl;
        else cout<<"3"<<endl;

    }

   return 0;
}

