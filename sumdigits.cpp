//Write a program to find the sum of digits of a number
#include <iostream>
using namespace std ;
void SumofDigits(){
    int num;
    cout<<"enter number :"<<" ";
    cin>>num;
    int sum =0;

    while (num>0){
        
        int rem = num %10;
        sum+=rem;
        num/=10;
    }
    cout <<"sum of digits of number is :"<< sum;


}
int main (){
    SumofDigits();
}