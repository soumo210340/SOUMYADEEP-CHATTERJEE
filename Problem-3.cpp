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
