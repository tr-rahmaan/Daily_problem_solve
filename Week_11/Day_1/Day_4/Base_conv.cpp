#include<bits/stdc++.h>
using namespace std;

void base_con(int n)
{
    if(n==0) return;
    int reminder=n%2;
    base_con(n/2);
    cout <<reminder;
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        if(x==0) cout <<x<< endl;
        else{
        base_con(x);
        }
        cout<< endl;
    }
    //cout<< endl;

}
