//Common elements in 3 sorted arrays

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[100000], b[100000], c[100000];
    for(int i = 0; i < n1; i++) cin >> a[i];
    for(int i = 0; i < n2; i++) cin >> b[i];
    for(int i = 0; i < n3; i++) cin >> c[i];

    int i = 0, j = 0, k = 0;
    int found = 0;
    int lastPrinted = 2147483647;

    while(i < n1 && j < n2 && k < n3) {
        if(a[i] == b[j] && b[j] == c[k]) {
            if(a[i] != lastPrinted) {
                cout << a[i] << " ";
                lastPrinted = a[i];
            }
            found = 1;
            i++; j++; k++;
        }
        else if(a[i] < b[j]) i++;
        else if(b[j] < c[k]) j++;
        else k++;
    }

    if(!found) cout << -1;
    return 0;
}
