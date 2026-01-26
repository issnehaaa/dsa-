#include <iostream>
using namespace std;
void Palindrome(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    int num =n;

    int rev=0;

    while (n>0){
        int rem = n%10;
        rev = rev*10 + rem;
         n = n/10;

    }
    if (rev ==num ){
        cout<<"palindromic hai ji "<<endl;
    
    }
     else  {
        cout<<"the number is not plaindromic oopsie ";
    }
}
int main(){
    Palindrome();
}