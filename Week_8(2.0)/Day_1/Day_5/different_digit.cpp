#include <iostream>
#include <set>
using namespace std;

int main() {
    int a, b, n, count;

    while (cin >> a >> b) {
        count = 0;

        for (int i = a; i <= b; i++) {
            n = i;
            bool dup = false;


            while (n != 0) {
                int d = n % 10;
                if (digits.find(d) != digits.end()) {
                    dup = true;
                    break;
                }
                digits.insert(d);
                n /= 10;
            }

            if (!dup) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
