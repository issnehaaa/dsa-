////write a program to count set bits

#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;
    while (n != 0) {
        count += (n & 1);
        n >>= 1;
    }

    cout << count;
    return 0;
}
