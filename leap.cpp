//leap year or not 
#include <iostream>
using namespace std;
void leapYear(int year ){
    if(year %4 ==0 && year %100!= 0 || year%400==0 ){
        cout<<"leap year chat !"<<endl;
    }
    else{
        cout<<"not a leap year oh oh!"<<endl;
    }

}
int main (){
   leapYear(2016);


return 0;
}