#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++) cin >> a[i];

    int curr = 1, ans = 1;
    for(int i = 1; i < n; i++){
        if((a[i] % 2 == 0 && a[i-1] % 2 != 0) || (a[i] % 2 != 0 && a[i-1] % 2 == 0)){
            curr++;
            if(curr > ans) ans = curr;
        } else {
            curr = 1;
        }
    }

    cout << ans;
    return 0;
}
