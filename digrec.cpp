//count digits using recursion
#include <iostream>
using namespace std;
int CountDigits(int n ){
    if (n==0){
        return 0;
    }
    return 1+ CountDigits(n/10);

}
int main(){
    cout <<" the number of digits are : "<<CountDigits(9875);
}