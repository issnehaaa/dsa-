// find the only odd occurring number (every other number occurs even times)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        ans ^= x;
    }

    cout << ans;
    return 0;
}
