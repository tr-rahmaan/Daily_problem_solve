#include <iostream>
using namespace std;

int main() {
    long long t;
    cin >> t;
    if (t % 2 == 0)
        cout << (t / 2) << endl;
    else
        cout << -(t / 2) - 1 << endl;

    return 0;
}
