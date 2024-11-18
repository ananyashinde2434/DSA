#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 4; i++) {    // Loop for lines 1 to 4
        for (int j = 1; j <= 4; j++) { // Loop for numbers 1 to 4 in each line
            cout << j << " ";         // Print the number followed by a space
        }
        cout << endl;                 // Move to the next line after each row of numbers
    }
    
    return 0;
}
