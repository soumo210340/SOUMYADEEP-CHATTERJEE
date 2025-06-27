/*
Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
  (examples)
  input: [1,2,8,9,12,46,76,82,15,20,30]
  Output: 
    {1: 11, 2: 8, 3: 4, 4: 4, 5: 3, 6: 2, 7: 0, 8: 1, 9: 1}
*/
// Problem 4 Solution
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> nums = {1,2,8,9,12,46,76,82,15,20,30};
    map<int, int> counts;
    for (int i = 1; i <= 9; ++i) counts[i] = 0;
    for (int n : nums) {
        for (int i = 1; i <= 9; ++i) {
            if (n % i == 0) counts[i]++;
        }
    }
    cout << "{";
    for (int i = 1; i <= 9; ++i) {
        cout << i << ": " << counts[i];
        if (i < 9) cout << ", ";
    }
    cout << "}" << endl;
    return 0;
}
