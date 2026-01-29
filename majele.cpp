//majority elemtn in the array
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int candidate = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(count == 0) {
            candidate = arr[i];
            count = 1;
        } else if(arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    int freq = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == candidate) freq++;
    }

    if(freq > n / 2) cout << candidate;
    else cout << -1;

    return 0;
}
