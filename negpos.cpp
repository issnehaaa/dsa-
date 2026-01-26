//neg or pos 

#include <iostream>
using namespace std;
void NegPos(int n){

     if (n==0){
        cout<<"number is neither negative nor positive."<<endl;
    }

    else if(n<0){
        cout<<"number is negative"<<endl;
    }

    else if(n>0){
        cout<<"the number is positive"<<endl;

    }

    else{
        cout<<"enter a valid number "<<endl;
    }

}
int main (){
    int n;
    NegPos(-7);
    NegPos(0);
    NegPos(2);

return 0;
}