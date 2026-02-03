//Write a program to check if the kth bit is set

#include <iostream>
using namespace std;

int main() {
    long long n;
    int k;
    cin >> n >> k;

    if ((n & (1LL << k)) != 0) cout << "SET";
    else cout << "NOT SET";

    return 0;
}
