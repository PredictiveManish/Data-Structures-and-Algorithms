#include <iostream>
#include <limits> // For std::numeric_limits
using namespace std;

int reverse(int n) {
    int reversedNumber = 0;
    while (n != 0) {
        int digit = n % 10;
        // Check for overflow
        if (reversedNumber > (std::numeric_limits<int>::max() / 10) ||
            (reversedNumber == std::numeric_limits<int>::max() / 10 && digit > 7)) {
            return 0; // Overflow, return 0 or handle as needed
        }
        if (reversedNumber < (std::numeric_limits<int>::min() / 10) ||
            (reversedNumber == std::numeric_limits<int>::min() / 10 && digit < -8)) {
            return 0; // Underflow, return 0 or handle as needed
        }
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }
    return reversedNumber;
}

int main() {
    int n;
    cin >> n;

    cout << "The reversed number of input is: " << reverse(n) << endl;

    return 0;
}
