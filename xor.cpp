#include <iostream>
using namespace std;

int xorTillN(int n) {
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    int L = 3, R = 9;

    int result = xorTillN(R) ^ xorTillN(L - 1);

    cout << "XOR from L to R: " << result;
    return 0;
}
