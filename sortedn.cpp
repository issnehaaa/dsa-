//Find all elements that appear more than n/k times 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100000];
    for(int i = 0; i < n; i++) cin >> a[i];

    int k;
    cin >> k;

    int val[100000], freq[100000];
    int m = 0;

    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < m; j++) {
            if(val[j] == a[i]) {
                freq[j]++;
                found = 1;
                break;
            }
        }
        if(!found) {
            val[m] = a[i];
            freq[m] = 1;
            m++;
        }
    }

    int printed = 0;
    for(int i = 0; i < m; i++) {
        if(freq[i] > n / k) {
            cout << val[i] << " ";
            printed = 1;
        }
    }

    if(!printed) cout << -1;
    return 0;
}
