#include <iostream>
using namespace std;

void printTriangle(int n, bool upsideDown) {
    if (upsideDown) {
        for (int i = n; i >= 1; --i) {
            for (int j = 0; j < i; ++j)
                cout << "X";
            cout << endl;
        }
    } else {
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j)
                cout << "X";
            cout << endl;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of triangles: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        printTriangle(n, i % 2 != 0);
        if (i < n - 1)
            cout << string(n, '-') << endl;
    }

    return 0;
}

