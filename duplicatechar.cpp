//remove duplicate charcaters from strings 
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";

    for (int i = 0; i < s.length(); i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                found = true;
                break;
            }
        }
        if (!found)
            ans += s[i];
    }

    cout << ans;
    return 0;
}