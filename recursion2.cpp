#include<iostream>
using namespace std;

// Helper function to print numbers from 1 to n using recursion
void printNumbers(int n) {
    // Base case: if n is 0, stop the recursion
    if (n == 0)
        return;

    // Recursive call with n-1
    printNumbers(n - 1);

    // Print the current number after the recursive call
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Start the recursion
    printNumbers(n);
    cout << endl;

    return 0;
}
