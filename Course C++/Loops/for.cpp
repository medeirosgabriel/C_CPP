#include <iostream>
using namespace std;

int main() {
    
    int x, y, z;

    for (x = 0; x <= 10; x++) {
        cout << x << endl;
    }

    cout << "------------------------------" << endl;

    for (x = 0, y = 1; x <= 10; x++,y+=2) {
        cout << x << " - " << y << endl;
    }

    cout << "------------------------------" << endl;

    for (x = 0, y = 1, z = 0; x <= 10 && z <= 6; x++,y+=2,z+=2) {
        cout << x << " - " << y << " - " << z << endl;
    }
}