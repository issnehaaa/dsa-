#include <iostream>
using namespace std ;
void TriangleParamters(int ang_a , int ang_b, int ang_c){
    int sum = ang_a +ang_b +ang_c;
    if (sum ==180){
        cout<<"valid triangle"<<endl;
    }
    else{
        cout<<"enter valid angles dude !"<<endl;
    }
}
int main (){
    TriangleParamters(60,60,60);
    TriangleParamters(60,70,80);

    return 0;
}