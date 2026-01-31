#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[100000], pref[100000];
    for(int i = 0; i < n; i++) cin >> a[i];

    pref[0] = a[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + a[i];
    }

    int q;
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        long long sum = pref[r] - (l > 0 ? pref[l-1] : 0);
        cout << sum << "\n";
    }

    return 0;
}
