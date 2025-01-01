#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int prev = 1, curr = 1;
    int count = 0, num = 1;

    while (count < k) {
        if (num == curr) {
            int next = prev + curr;
            prev = curr;
            curr = next;
        } else {
            count++;
        }
        num++;
    }
    cout << num - 1 << endl;
    return 0;
}
