#include <iostream>
using namespace std;
void CheckPrime(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int flag;

    for (int i =2; i<n; i++){
        if (n%i==0){
            cout<<"the number is not prime.";
            flag=1;
            break;
        }
    }

    if(flag !=1){
        cout<<"the number is prime chat ";
    }
}
int main(){
    CheckPrime();

}