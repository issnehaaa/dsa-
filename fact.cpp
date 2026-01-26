#include <iostream>
using namespace std;
void fact(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int fact=1;

    for (int i =1 ;i<= n ; i++){
        fact=fact*i;
    }

    cout<<"the fcatorial is :"<< fact<<endl;

}

int main(){
    fact();
}