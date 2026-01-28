#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int mx = a[n - 1];
    cout << mx << " ";

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > mx) {
            cout << a[i] << " ";
            mx = a[i];
        }
    }

    return 0;
}
