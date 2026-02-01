//find the union and intersection of two sorted arrays
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100000], b[100000];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;

    cout << "Union: ";
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            cout << a[i] << " ";
            i++;
        } else if (a[i] > b[j]) {
            cout << b[j] << " ";
            j++;
        } else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < n) {
        cout << a[i] << " ";
        i++;
    }
    while (j < m) {
        cout << b[j] << " ";
        j++;
    }

    cout << "\nIntersection: ";
    i = 0;
    j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }

    return 0;
}
