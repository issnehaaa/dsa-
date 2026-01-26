//Write a program to print numbers from N to 1


#include <iostream>
using namespace std ;
void PrintNumbers(){
    int n1= 1 ;
    int nth ;
    cout<<"enter the last number"<<endl;
    cin>>nth;

    cout<<"printing numbers from N to 1 are :"<< " " ;
    
    for (int i=nth ; i >=2 ;i-- ){

        cout<<i<<" ";
       
    }
    cout<<n1;
}
int main (){
    PrintNumbers();

}