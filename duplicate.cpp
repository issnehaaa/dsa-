// duplicate in an array remove 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    int res[n];
    int resSize = 0;

    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<resSize;j++){
            if(arr[i] == res[j]){
                found = true;
                break;
            }
        }
        if(!found) res[resSize++] = arr[i];
    }

    for(int i=0;i<resSize;i++) cout << res[i] << " ";
    return 0;
}
