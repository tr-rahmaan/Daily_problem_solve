#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,x,y;
    cin >>a>>b>>x>> y;
    int fl=abs(a-b);
    int cor =

    // Time using only the corridor for matching floors
    int cor= fl*x + y;

    // The minimum time
    cout << min(time_using_corridor, time_using_stairs) << '\n';

    return 0;
}
