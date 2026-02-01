//sort an array which consists of only 0, 1, and 2 without using sorting
#include <iostream>
using namespace std;

void sort012(int a[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (a[mid] == 0) {
            int t = a[low];
            a[low] = a[mid];
            a[mid] = t;
            low++;
            mid++;
        } else if (a[mid] == 1) {
            mid++;
        } else {
            int t = a[mid];
            a[mid] = a[high];
            a[high] = t;
            high--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    sort012(a, n);

    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
