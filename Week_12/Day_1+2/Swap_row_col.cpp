#include <iostream>
using namespace std;

void swap_rows(int arr[][500], int row1, int row2, int n) {
    for (int j = 0; j < n; j++) {
        swap(arr[row1][j], arr[row2][j]);
    }
}

void swap_columns(int arr[][500], int col1, int col2, int n) {
    for (int i = 0; i < n; i++) {
        swap(arr[i][col1], arr[i][col2]);
    }
}

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    x--;
    y--;

    int arr[500][500];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    swap_rows(arr, x, y, n);
    swap_columns(arr, x, y, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
