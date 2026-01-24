// printing a pattern of character triangle 
#include <iostream>
using namespace std;
void CharacterTriangle(int n) {
        
        for (int i=1;i<=n;i++ ){
            char ch = 'A';
        for (int j=1;j<=i;j++){
            
            cout<< ch ;
            ch++;
           
        }
        cout<< " "<< endl;
    }

}
int main (){
    int n;

    CharacterTriangle(4);

return 0;
}