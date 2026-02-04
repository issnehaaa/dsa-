//Find two odd appearing numbers (exactly two numbers occur odd times)
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100000];
    int xo = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        xo ^= arr[i];
    }

    int rightmostSetBit = xo & (-xo);

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmostSetBit) a ^= arr[i];
        else b ^= arr[i];
    }

    cout << a << " " << b;
    return 0;
}