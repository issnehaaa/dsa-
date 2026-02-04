//Find the missing number in an array (numbers from 1 to n, one missing)

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, ans = 0;

    for (int i = 1; i <= n; i++) ans ^= i;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        ans ^= x;
    }

    cout << ans;
    return 0;
}