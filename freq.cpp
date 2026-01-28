#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 2, 2, 3, 3, 4, 5, 5};
    int n = 9;

    int i = 0;
    while (i < n) {
        int count = 1;
        while (i + 1 < n && a[i] == a[i + 1]) {
            count++;
            i++;
        }
        cout << a[i] << " occurs " << count << " times" << endl;
        i++;
    }

    return 0;
}
