#include <iostream>
using namespace std;

void rev(int a[], int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    int d = 2;

    d %= n;

    rev(a, 0, d - 1);
    rev(a, d, n - 1);
    rev(a, 0, n - 1);

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
