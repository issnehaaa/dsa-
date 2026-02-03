////Write a program to check if a number is a power of two
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0) cout << "YES";
    else cout << "NO";

    return 0;
}
