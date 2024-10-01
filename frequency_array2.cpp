#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k, 0);
        for (int num : arr) {
            int rem = num % k;
            if (rem < 0) {
                rem += k;
            }
            freq[rem]++;
        }
        
        if (freq[0] % 2 != 0) {
            return false;
        }
        
        for (int i = 1; i <= k / 2; i++) {
            if (freq[i] != freq[k - i]) {
                return false;
            }
        }
        
        return true;
    }
};

int main() {
    Solution solution;
    
    vector<int> arr = {1, 2, 3, 4, 5, 10, 6, 7, 8, 9};
    int k = 5;
    
    if (solution.canArrange(arr, k)) {
        cout << "The array can be arranged in pairs divisible by " << k << "." << endl;
    } else {
        cout << "The array cannot be arranged in pairs divisible by " << k << "." << endl;
    }
    
    return 0;
}
