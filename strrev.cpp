//Write a program to check if a string is a palindrome using recursion
#include <iostream>
using namespace std;
void StrReverse(string &s , int i ){
    if (i>= s.length() /2){
        return;
    }
    swap (s[i] , s[s.length()-i-1]);
    StrReverse(s , i+1);
}

int main (){
    string s;
    cout << "Enter string: ";
    cin >> s;

    StrReverse(s, 0);

    cout << "Reversed string: " << s;
    return 0;

}
