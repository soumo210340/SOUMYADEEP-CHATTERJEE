/*
Problem-2: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

  Output: (examples)
    1) input a = 1, then output : 1
    2) input a = 2, then output : 1, 3
    3) input a = 3, then output : 1, 3, 5
    4) input a = 4, then output : 1, 3, 5, 7
    .
    .
    5) input a = x, then output : 1, 3, 5, 7, .......
*/
// Problem 2 Solution
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    for (int i = 0; i < a; ++i) {
        if (i > 0) cout << ", ";
        cout << (2 * i + 1);
    }
    cout << endl;
    return 0;
}
