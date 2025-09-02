#include <iostream>
#include <cmath>
using namespace std;

// Recursive function
int binaryToDecimal(int n, int power = 0) {
    if (n == 0) 
        return 0;

    int lastDigit = n % 10;  // get last binary digit
    return lastDigit * pow(2, power) + binaryToDecimal(n / 10, power + 1);
}

int main() {
    int binaryNum;
    cout << "Enter a binary number: ";
    cin >> binaryNum;

    cout << "Decimal: " << binaryToDecimal(binaryNum) << endl;
    return 0;
}
