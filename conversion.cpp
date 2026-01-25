// conversion 
#include <iostream>
using namespace std;

void MtoKM() {
    float m;
    cout << "enter the m : " << endl;
    cin >> m;

    float km = m / 1000;
    cout << m << " metre to " << km << " kilometre" << endl;
}

void KMtoM() {
    float km;
    cout << "enter the km : " << endl;
    cin >> km;

    float m = km * 1000;
    cout << km << " kilometre to " << m << " metre" << endl;
}

int main() {
    MtoKM();
    KMtoM();

    return 0;
}