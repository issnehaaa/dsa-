// second largest item in an array 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) 
    cin >> arr[i];

    int largest, second;
    if(arr[0] > arr[1]){
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(int i=2;i<n;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    cout << second << endl;
    return 0;
}
