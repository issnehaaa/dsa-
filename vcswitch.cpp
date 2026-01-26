//vow or cons using switch 


#include <iostream>
using namespace std;
void VoworConso(char ch){

    switch(ch){

        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Character is a vowel"<<endl;
            break;

        default:
            cout << "Character is a consonant"<<endl;

    }
}
int main(){
    VoworConso('g');
    VoworConso('a');


return 0;
}