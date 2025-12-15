
#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (x > y)
        cout << "Largest = " << x << endl;
    else
        cout << "Largest = " << y << endl;

    return 0;
}
