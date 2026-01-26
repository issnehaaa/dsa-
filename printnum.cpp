//Write a program to print numbers from 1 to N

#include <iostream>
using namespace std ;
void PrintNumbers(){
    int n1= 1 ;
    int nth ;
    cout<<"enter the last number"<<endl;
    cin>>nth;

    cout<<"printing numbers from 1 to N are : "<< n1<<" " ;
    
    for (int i =2 ; i <=nth ;i++ ){

        cout<<i<<" ";
       
    }
}
int main (){
    PrintNumbers();

}