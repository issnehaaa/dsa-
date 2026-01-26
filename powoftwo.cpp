#include <iostream>
using namespace std;
int PowOfTwo(int n ){
    if (n==0){
        return 1;
    }
    return 2*PowOfTwo(n-1);
}

int main(){
    int n;
    cout<<"enter the power of two :";
    cin>>n;
    cout<< "the power of 2^"<<n <<"is :"<< PowOfTwo(n);
}