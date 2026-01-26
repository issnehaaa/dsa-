#include <iostream>
using namespace std ;
void BinSerach(){
     int arr[]={1,2,3,4,7,8,9};
     int n = sizeof(arr) / sizeof(arr[0]);
     int start =0;
     int end = n-1;
     int target=67;
    
    while (start<=end){
        int mid = (start+end)/2;
        if (arr[mid]==target){
            cout<<"element found";
            return;
        }
        else if (arr[mid]< target){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    cout<<"element not found";
}



int main(){
    BinSerach();
    return 0;
}