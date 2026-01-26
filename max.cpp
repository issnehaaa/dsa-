//max of three numbers 

#include <iostream>
using namespace std;
void max(int a , int b , int c ){
    if(a>b && a>c){
        cout<<"a is max"<<endl;

    }

    if (b>c && b>a){
         cout<<"b is max"<<endl;

    }

    if (c>a && c>b){
        cout<<"c is max"<<endl;
    }
}
int main (){
    max(3,4,5);
    max(0,63673,768);


return 0;
}