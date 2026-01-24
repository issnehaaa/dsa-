//inverted right angled triangle 
#include <iostream>
using namespace std;
void InvertedTriangle(int n) {
        
        for (int i=1;i<=n;i++ ){
        for (int j=1;j<=n+1-i;j++){
            cout<<"*";
        }
        cout<< " "<< endl;
    }

}
int main (){
    int n;
    InvertedTriangle(6);

return 0;
}
   