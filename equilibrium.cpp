#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[100000];
    for(int i = 0; i < n; i++) cin >> a[i];

    long long total = 0;
    for(int i = 0; i < n; i++) total += a[i];

    long long leftSum = 0;
    for(int i = 0; i < n; i++){
        total -= a[i];
        if(leftSum == total){
            cout << i;
            return 0;
        }
        leftSum += a[i];
    }

    cout << -1;
    return 0;
}
