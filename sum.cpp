//find all pairs in an array whose sum is equal to a given number
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++) cin >> a[i];

    int target;
    cin >> target;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                cout << a[i] << " " << a[j] << "\n";
            }
        }
    }
    return 0;
}
