#include <iostream>
using namespace std;
void fibbo (){
    int terms;
    cout<<"enter the number of terms ";
    cin>>terms;
    int n1=0;
    int n2=1;
    int n3;
    cout << n1 << " " << n2 << " ";

    for(int i = 2; i < terms; i++){
    n3 = n1 + n2;
    cout << n3 << " ";
    n1 = n2;
    n2 = n3;
   
}

 cout<<endl;

cout<<"the nth term is:"<<n3<<endl;
}



int main(){
    fibbo();
}