// Write a program to check if a number is an Armstrong number
#include <iostream>
using namespace std;
void Armstrong(){
     int n;
    cout<<"enter the three digit number :";
    cin>>n;
    int num =n;
    

    int sum=0;

    while (n>0){
        int rem = n%10;
        sum = sum + rem*rem*rem ;
         n = n/10;

    }

    if (sum==num){
        cout<<"the number is armstrong";
    }

    else{
        cout<<" the number is not atrmstrong oopsie";
    } 
}
int main (){
    Armstrong();
}