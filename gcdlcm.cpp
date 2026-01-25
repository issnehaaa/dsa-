#include<iostream>
using namespace std;
void findGcd(){
    int a, b;
    cout<<"enter a and b :";
    cin>>a;
    cin>>b;

    while (b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    cout<<"gcd is "<<  a<<endl;

}

void findLcm(){
    int a, b;
    cout<<"enter a and b :";
    cin>>a;
    cin>>b;

    int lcm = (a>b)? a:b;

    while(1){
        if (lcm%a==0 && lcm%b==0){
            cout<<"the lcm is "<<lcm;
            break;
        }
    lcm++;
    }
}
int main(){
    findGcd();
    findLcm();
    

    return 0;
}