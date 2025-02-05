#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> a;

bool pelin_array(int l, int r)
{
    if (l >= r) return true;

    if (a[l] != a[r]) return false;
    return pelin_array(l + 1, r - 1);
}

int main()
{
    cin >> N;
    a.resize(N);

    for (int i = 0; i < N; i++) cin >> a[i];

    if (pelin_array(0, N - 1))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
