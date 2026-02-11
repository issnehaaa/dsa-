#include <iostream>
using namespace std;

int main() {
    int A = 10, B = 20;

    int xr = A ^ B;
    int count = 0;

    while(xr) {
        count++;
        xr = xr & (xr - 1);
    }

    cout << "Bits to flip: " << count;
    return 0;
}
