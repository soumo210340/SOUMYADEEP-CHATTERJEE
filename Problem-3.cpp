/*
Problem-3: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]

  Output: (examples)
    1) input a = 1, then output : 1
    2) input a = 2, then output : 1
    3) input a = 3, then output : 1, 3, 5
    4) input a = 4, then output : 1, 3, 5
    5) input a = 5, then output : 1, 3, 5, 7, 9
    6) input a = 6, then output : 1, 3, 5, 7, 9
    .
    .
    7) input a = x, then output : 1, 3, 5, 7, .......
*/
// Problem 3 Solution
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;
    int count = 0;
    for (int i = 1; count < a; i += 2) {
        if (i > 2 * a - 1) break;
        if (count > 0) cout << ", ";
        cout << i;
        ++count;
    }
    cout << endl;
    return 0;
}
