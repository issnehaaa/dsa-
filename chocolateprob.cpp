//chcolate probl;em
#include <iostream>
using namespace std;

void sortArr(int a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - 1 - i; j++) {
            if(a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int a[100000];
    for(int i = 0; i < n; i++) cin >> a[i];

    int m;
    cin >> m;

    if(m > n) {
        cout << -1;
        return 0;
    }

    sortArr(a, n);

    int ans = a[m - 1] - a[0];
    for(int i = 1; i + m - 1 < n; i++) {
        int diff = a[i + m - 1] - a[i];
        if(diff < ans) ans = diff;
    }

    cout << ans;
    return 0;
}
