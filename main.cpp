#include <iostream>

#include "TinyVector"
#include "TinyColor.h"

using namespace std;

using color = TinyVector<int, 3>;
int main() {
    color A;
    cout << "Hello, World!" << endl;
    cout << TinyColor::RED << endl;
    return 0;
}