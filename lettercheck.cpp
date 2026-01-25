// check letter to be a vow or consonant
#include <iostream>
using namespace std;
void VoworConso(char ch){

    if (ch == 'a'||ch =='e'||ch=='i'||ch=='o'||ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
{
        cout<<"character is a vowel."<<endl;

    }
    else{
        cout<<"the charcater is a consonant "<<endl ;
    }
}
int main(){
    VoworConso('g');
    VoworConso('a');


return 0;
}