#include <iostream>
using namespace std ;
void FirstSum(){
    int n;
    cout<<"enter number :";
    cin>>n;
    int sum=0;
    for (int i =0 ;i<=n;i++){
         sum = sum+i;
    }

    cout<<"the sum of first N natural number is: "<< sum << endl;

}
int main(){
    
    FirstSum();

}