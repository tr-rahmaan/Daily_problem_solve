#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, vector<int>> brand_costs;

        // Reading input and grouping costs by brand
        for (int i = 0; i < k; i++) {
            int brand, cost;
            cin >> brand >> cost;
            brand_costs[brand].push_back(cost);
        }

        // Calculate maximum earnings
        long long max_earnings = 0;

        for (auto &entry : brand_costs) {
            auto &costs = entry.second;
            sort(costs.rbegin(), costs.rend()); // Sort costs in descending order

            // Sum up to n highest costs for this brand
            for (int i = 0; i < min(n, (int)costs.size()); i++) {
                max_earnings += costs[i];
            }
        }

        cout << max_earnings << endl;
    }

    return 0;
}
