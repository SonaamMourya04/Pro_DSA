#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;  // sum of 0..n
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    return expectedSum - sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
   
    cout<< "missing number:"<< missingNumber(nums);
    return 0;
}
