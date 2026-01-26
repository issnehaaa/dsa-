
#include <iostream>
using namespace std;
 bool isPrime(int n){
    if (n==1||n==0) return false;

    for (int i =2; i<=n/2;i++ ){
        if (n%i==0) return false;
    }

    return true ;
}
int main(){
    int N;
    cout<<"enter the number :";
    cin>>N;

    for (int i=0 ; i<=N ;i++){
        if (isPrime(i)){
            cout << i <<' ';
        }
    }

return 0;
}
 