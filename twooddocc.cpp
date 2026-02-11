#include <iostream>
using namespace std;

int main() {
    int arr[] = {4, 3, 4, 4, 4, 5, 5, 3, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    int xr = 0;
    for(int i = 0; i < n; i++)
        xr ^= arr[i];

    int setBit = xr & -xr;

    int num1 = 0, num2 = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] & setBit)
            num1 ^= arr[i];
        else
            num2 ^= arr[i];
    }

    cout << "Odd appearing numbers: " << num1 << " " << num2;
    return 0;
}
