#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    unordered_map<int, int> mp;
    vector<int> v;  // to store numbers in the order they first appear

    // Read input until EOF
    while (cin >> x) {
        // If x has not been encountered before, add it to vector
        if (mp.find(x) == mp.end()) {
            v.push_back(x);
        }
        // Increment the count of x
        mp[x]++;
    }

    // Print each unique number with its count
    for (auto u : v) {
        cout << u << " " << mp[u] << endl;
    }

    return 0;
}
