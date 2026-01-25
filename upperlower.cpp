#include <iostream>
using namespace std;
void LowerUpper(){
    char ch;
    cout<<" enter the character"<<endl;
    cin>>ch;
    if (ch >= 'a'&& ch <='z'){
        cout<<"the charcter is lowercase chat !";
    }
    else if (ch >= 'A' && ch <='Z'){
        cout<<"the charcater is uppercase chat ";
    }
    else {
        cout<<"enter valid character !";
    }

}
int main(){
        LowerUpper();
        


return 0;
}