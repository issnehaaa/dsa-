// linear search 
#include <iostream>
using namespace std ;
int main(){
    int arr[5]={ 1, 2, 3, 4 ,5};
    int size =5;

    for (int i =0; i<size;i++){
        int target = 9;
        if (arr[i]==target){
            cout<<"target found at "<< i<<endl;
            return 0;
        }
    }
   
    cout<<"target not found mate"<<endl;
}