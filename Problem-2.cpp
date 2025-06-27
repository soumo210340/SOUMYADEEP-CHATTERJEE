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
