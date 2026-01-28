#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 3, 10, 6, 4, 8, 1};
    int n = 7;

    int min_val = a[0];
    int max_diff = a[1] - a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] - min_val > max_diff)
            max_diff = a[i] - min_val;
        if (a[i] < min_val)
            min_val = a[i];
    }

    cout << "Maximum difference: " << max_diff;
    return 0;
}
