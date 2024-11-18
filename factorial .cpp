#include <iostream>
using namespace std;

int factorial(int n) {
    //Handle negative input
    if (n < 0) {
       return -1; // Indicate an error for negative input
    }

    // Base condition
    if (n == 0) {
        return 1;
    }
<
    // Recursive call
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = factorial(n);

    if (result == -1) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << n << " is " << result << endl;
    }

    return 0;
}
